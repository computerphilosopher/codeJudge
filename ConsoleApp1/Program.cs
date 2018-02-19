using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Diagnostics;

namespace ConsoleApp1
{
    class GccManager
    {
        Process compileProcess;
        Process excuteProcess;

        GccManager()
        {

            compileProcess = new Process();
            excuteProcess = new Process();
        }

        void compile(string compiler_path)
        {

            compileProcess.StartInfo = new ProcessStartInfo(compiler_path, null);
            //compileProcess.StartInfo.FileName = "gcc.bat";
            compileProcess.StartInfo.UseShellExecute = false;
            compileProcess.StartInfo.WindowStyle = ProcessWindowStyle.Hidden;

            compileProcess.Start();
            compileProcess.Kill();
        }

        void excute(string exe_path)
        {


            excuteProcess.StartInfo = new ProcessStartInfo(exe_path, null);

            //excuteProcess.StartInfo.FileName = "hello.exe";
            
            excuteProcess.StartInfo.UseShellExecute = false;
            excuteProcess.StartInfo.RedirectStandardOutput = true;
            excuteProcess.StartInfo.WindowStyle = ProcessWindowStyle.Hidden;
            
            excuteProcess.Start();
        }

        static void Main(string[] args)
        {
            GccManager g = new GccManager();
            g.compile("F:\\gcc.bat");
            g.excute("C:\\Users\\user\\Desktop\\hello.exe");
 
            string str = g.excuteProcess.StandardOutput.ReadToEnd();
            g.excuteProcess.WaitForExit();

            Console.WriteLine("test");
            Console.WriteLine(str);
 
        }
 
    }

    /* 채점 클래스 */

    class Marker
    {


    }
}
//C:\Users\user\Desktop\VimC:\Users\user\Desktop\Vim\MinGW\bin