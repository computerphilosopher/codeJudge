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
            string relativePath = Application.ExecutablePath + "\\..\\..";
            Console.WriteLine(relativePath);

            GccManager g = new GccManager(relativePath + "\\gcc.bat", relativePath + "\\hello.exe");
            //GccManager g = new GccManager("F:\\gcc.bat", "C:\\Users\\user\\Desktop\\hello.exe");
            
            g.Compile();
            g.Excute();
            
            g.excuteProcess.WaitForExit();
            string str = g.excuteProcess.StandardOutput.ReadToEnd();

            Console.WriteLine("test");
            Console.WriteLine(str);

        }

    }

    /* 채점 클래스 */

    class Marker
    {
        private string userSubmission;
        private string correctAnswerPath;
 
        Marker (string userSubmission, string correctAnswerPath)
        {
            this.userSubmission = userSubmission;
            this.correctAnswerPath = correctAnswerPath ;

        }

        bool IsCorrect()
        {
            return false;

        }

 
    }
}