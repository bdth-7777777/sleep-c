# sleep-c
Pause the exact time in the command line\在命令行当中休眠精确的时间（毫秒）

平时在写bat脚本的时候，如果想使脚本暂停整数秒，可以使用timeout命令

如果想精确地暂停小于1秒的时间，可以使用ping命令，但是我发现ping命令有时不好用。

为了实现精确地暂停1秒以下的时间，还可以使用以下方法：

例如：创建一个 sleep.vbs文件，将  'WScript.Sleep 300' 输入，并在命令行当中使用

'start /wait sleep.vbs'

这样可以精确地暂停300毫秒，但是需要依赖vbs文件。

现在有了新的方法！我用c语言构建了可执行文件 sleep-c.exe,您可以使用它在命令行当中精确地暂停以毫秒为单位的时间。

![sleep-c](https://github.com/bdth-7777777/sleep-c/assets/142554252/1e40f088-1cac-409d-843c-21ddb349fac9)


在命令行或者bat脚本当中输入 'sleep-c -s 300' ,这样可以精确地使命令行或者脚本暂停300毫秒，前提是您将sleep-c加入环境变量或者放在命令行执行的目录。

如果您写bat脚本时需要使用到sleep-c.exe,而sleep-c.exe在某个文件夹而不是在脚本执行的目录，您可以使用以下方法正常使用sleep-c

@echo off
set sleep-c=bin\sleep-c.exe
%sleep-c% -s 300

总之，希望sleep-c能够在您需要时帮助您更好地完成您的bat脚本。




