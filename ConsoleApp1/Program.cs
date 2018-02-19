using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

using System.Diagnostics;


using System.Windows.Forms;

namespace ConsoleApp1
{
    class GccManager
    {
        private Process compileProcess;
        private Process excuteProcess;
        static string relativePath= Application.ExecutablePath + "\\..\\..";

        GccManager(string batchPath, string exePath)
        {

            compileProcess = new Process();
            excuteProcess = new Process();

            compileProcess.StartInfo = new ProcessStartInfo(batchPath, null);
            excuteProcess.StartInfo = new ProcessStartInfo(exePath, null);

        }

        public void Compile()
        {
            compileProcess.StartInfo.UseShellExecute = false;
            compileProcess.StartInfo.WindowStyle = ProcessWindowStyle.Hidden;

            compileProcess.Start();
            compileProcess.Kill();
        }

        public void Excute()
        {

            excuteProcess.StartInfo.UseShellExecute = false;
            excuteProcess.StartInfo.RedirectStandardOutput = true;
            excuteProcess.StartInfo.WindowStyle = ProcessWindowStyle.Hidden;

            excuteProcess.Start();
        }

        static void Main(string[] args)
        {

            GccManager g = new GccManager(GccManager.relativePath + "\\gcc.bat", GccManager.relativePath + "\\hello.exe");

            Console.WriteLine(GccManager.relativePath);
            
            g.Compile();
            g.Excute();
            
            g.excuteProcess.WaitForExit();

            string userProgramOutput = g.excuteProcess.StandardOutput.ReadToEnd();

            Console.WriteLine("test");
            Console.WriteLine(userProgramOutput);

            Marker m = new Marker (userProgramOutput, relativePath + "\\a.txt");

            Console.WriteLine(m.IsCorrect());


        }

    }

    /* 채점 클래스 */

    public class Marker
    {
        private string userSubmission;
        private string AnswerPath;
        private string Answer;
 
        public Marker (string userSubmission, string AnswerPath)
        {
            this.userSubmission = userSubmission;
            this.AnswerPath = AnswerPath ;
 
            Answer = File.ReadAllText(AnswerPath);
        }


        public bool IsCorrect()
        {
            if (userSubmission.Equals(Answer))
            {
                return true;
            }

            else
            {
                return false;
            }

        }
 
    }
}