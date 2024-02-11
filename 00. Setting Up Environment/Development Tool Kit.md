## Install Compiler

**2 Compilers**

 * 1. GCC
 * 2. Clang

 * Need both compliers for making Machine Code through Source Code.
 
 * **Install both, Just by following Link :**
 
 * Link : https://t.me/DocsFiles/2

 * Download & Extract this file by WinRAR.
 * Extracted Folder will be `msys64`, move it into C-drive.
 * Open it and move to the `mingw64` folder, then move to `bin` & copy the path of bin folder.     (Example : C:\msys64\mingw64\bin)

 * Press `Window` Key, Search for ``System Environment Variables``.
 * Go to `Advanced` menu and open `Environment Variables`.
 * See in `System Variables`, Find `Path` variable, click on it and then click on `Edit`.
 * Now, click on `New`, and paste that copied path here & save it.

 * **To Check If It's properly installed or Not**
 
 * * Open Terminal & type Command, `g++ --version`.  (For GCC)
 * * It would be come up like this :

 * * * g++.exe (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r5) 13.2.0
 Copyright (C) 2023 Free Software Foundation, Inc.
 This is free software; see the source for copying conditions. There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

 * * Open Terminal & type Command, `Clang++ --version`.  (For Clang)
 * * It would be come up like this :

 * * * (built by Brecht Sanders, r5) clang version 17.0.6
 Target: x86_64-w64-windows-gnu
 Thread model: posix
 InstalledDir: C:/Program Files/mingw64/bin


## VS Code Extensions

 * Open Extensions Menu by `CTRL` + `SHIFT` + `X`, & Search for **C++**.
 * Look for **C/C++** & install it.


## Setting Up Compiler With VS Code

 * Create any C++ Basic Program as [main.cpp](https://github.com/KrunalKadtan/CPP/blob/main/main.cpp) in VS Code. This program is only for checking if our compiler is working properly or not.

 * Open Terminal Menu (At Top Left Corner) and Go to `Configure Tasks`.
 * Look for, **C/C++ : g++.exe build active file** & Click on it.
 * It will open ***tasks.json*** file.

 * In ***tasks.json***, 
 * * Change `label` from **C/C++: g++.exe build active file** to **Build With GCC 13.2.0**.
 * * Add `-std=c++23` after `-g` line as **"-std=c++23",**.
 * * Then Close it.

 * Now for running **main.cpp** file,

 * * Open it in VS Code.
 * * Open Terminal from `Terminal` menu (From Top Left Corner) by **New Terminal**.
 * * Again Open `Terminal` menu & Click on **Run Task** & Select **Build With GCC 13.2.0**
 * * You will see in terminal like below,
 * * * Starting build...
 "C:\msys64\mingw64\bin\g++.exe" -fdiagnostics-color=always -std=c++23 -g "D:\CPP\main.cpp" -o "D:\CPP\main.exe"
 Build finished successfully.

 * * And we got *main.exe* file.
 * * By pressing Enter, We come back on our Terminal and by giving Command `.\main.exe`, Our Code will be executed.

 * Do same thing for **Clang** Compiler.
 * Open Terminal Menu, Go to `Configure Tasks` & Look for, **C/C++ : clang++.exe build active file** & do similar steps we do for **g++.exe**

 * After doing all of this, a `.vscode` folder will auto generated into directory which contain `tasks.json` file.