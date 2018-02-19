using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Diagnostics;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string minGWPath = "C:\\Users\\user\\Desktop\\gcc.bat";
            string filePath = "C:\\Users\\user\\Desktop\\hello.exe";
            Console.WriteLine(minGWPath);

            ProcessStartInfo gccStartInfo = new ProcessStartInfo(minGWPath, null);
            ProcessStartInfo hello = new ProcessStartInfo(filePath, null);

            gccStartInfo.WindowStyle = ProcessWindowStyle.Hidden;

            Process.Start(gccStartInfo);
            Process.Start(hello);
        }
    }
}
//C:\Users\user\Desktop\VimC:\Users\user\Desktop\Vim\MinGW\bin