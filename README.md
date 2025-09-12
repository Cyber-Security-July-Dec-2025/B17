# SecureChat

## Overview

This project provides a **Secure Chat** application. It includes components for encryption, message handling, and possibly frontend/backend modules. Below you'll find project structure, setup instructions, and usage guidelines.

## Project Structure

```
SecureChat/
└── secure-chat
    ├── .git
    │   ├── HEAD
    │   ├── config
    │   ├── description
    │   ├── hooks
    │   │   ├── applypatch-msg.sample
    │   │   ├── commit-msg.sample
    │   │   ├── fsmonitor-watchman.sample
    │   │   ├── post-update.sample
    │   │   ├── pre-applypatch.sample
    │   │   ├── pre-commit.sample
    │   │   ├── pre-merge-commit.sample
    │   │   ├── pre-push.sample
    │   │   ├── pre-rebase.sample
    │   │   ├── pre-receive.sample
    │   │   ├── prepare-commit-msg.sample
    │   │   ├── push-to-checkout.sample
    │   │   ├── sendemail-validate.sample
    │   │   └── update.sample
    │   ├── info
    │   │   └── exclude
    │   ├── objects
    │   │   ├── info
    │   │   └── pack
    │   └── refs
    │       ├── heads
    │       └── tags
    ├── CMakeLists.txt
    ├── build
    │   ├── .qt
    │   │   ├── QtDeploySupport.cmake
    │   │   └── QtDeployTargets.cmake
    │   ├── CMakeCache.txt
    │   ├── CMakeFiles
    │   │   ├── 4.1.1
    │   │   │   ├── CMakeCXXCompiler.cmake
    │   │   │   ├── CMakeDetermineCompilerABI_CXX.bin
    │   │   │   ├── CMakeSystem.cmake
    │   │   │   └── CompilerIdCXX
    │   │   │       ├── CMakeCXXCompilerId.cpp
    │   │   │       ├── a.out
    │   │   │       ├── apple-sdk.cpp
    │   │   │       └── tmp
    │   │   ├── CMakeConfigureLog.yaml
    │   │   ├── CMakeDirectoryInformation.cmake
    │   │   ├── CMakeRuleHashes.txt
    │   │   ├── CMakeScratch
    │   │   ├── InstallScripts.json
    │   │   ├── Makefile.cmake
    │   │   ├── Makefile2
    │   │   ├── TargetDirectories.txt
    │   │   ├── cmake.check_cache
    │   │   ├── pkgRedirects
    │   │   ├── progress.marks
    │   │   ├── securechat.dir
    │   │   │   ├── DependInfo.cmake
    │   │   │   ├── build.make
    │   │   │   ├── cmake_clean.cmake
    │   │   │   ├── compiler_depend.internal
    │   │   │   ├── compiler_depend.make
    │   │   │   ├── compiler_depend.ts
    │   │   │   ├── depend.make
    │   │   │   ├── flags.make
    │   │   │   ├── link.txt
    │   │   │   ├── progress.make
    │   │   │   ├── securechat_autogen
    │   │   │   │   ├── mocs_compilation.cpp.o
    │   │   │   │   └── mocs_compilation.cpp.o.d
    │   │   │   └── src
    │   │   │       ├── CryptoHelper.cpp.o
    │   │   │       ├── CryptoHelper.cpp.o.d
    │   │   │       ├── MainWindow.cpp.o
    │   │   │       ├── MainWindow.cpp.o.d
    │   │   │       ├── main.cpp.o
    │   │   │       └── main.cpp.o.d
    │   │   ├── securechat_autogen.dir
    │   │   │   ├── AutogenInfo.json
    │   │   │   ├── AutogenUsed.txt
    │   │   │   ├── DependInfo.cmake
    │   │   │   ├── ParseCache.txt
    │   │   │   ├── build.make
    │   │   │   ├── cmake_clean.cmake
    │   │   │   ├── compiler_depend.internal
    │   │   │   ├── compiler_depend.make
    │   │   │   ├── compiler_depend.ts
    │   │   │   └── progress.make
    │   │   └── securechat_autogen_timestamp_deps.dir
    │   │       ├── DependInfo.cmake
    │   │       ├── build.make
    │   │       ├── cmake_clean.cmake
    │   │       ├── compiler_depend.make
    │   │       ├── compiler_depend.ts
    │   │       └── progress.make
    │   ├── Makefile
    │   ├── cmake_install.cmake
    │   ├── securechat
    │   └── securechat_autogen
    │       ├── UVLADIE3JM
    │       │   ├── moc_MainWindow.cpp
    │       │   └── moc_MainWindow.cpp.d
    │       ├── deps
    │       ├── include
    │       ├── moc_predefs.h
    │       ├── mocs_compilation.cpp
    │       └── timestamp
    ├── config.json
    ├── instances
    │   ├── instanceA
    │   │   ├── CMakeLists.txt
    │   │   ├── chat.log
    │   │   ├── config.json
    │   │   ├── config.json.tmp
    │   │   ├── keys
    │   │   │   ├── my_private.key
    │   │   │   ├── my_public.key
    │   │   │   └── peer_public.key
    │   │   ├── runA.log
    │   │   ├── runA.pid
    │   │   └── src
    │   │       ├── CryptoHelper.cpp
    │   │       ├── CryptoHelper.h
    │   │       ├── KeyGen.cpp
    │   │       ├── MainWindow.cpp
    │   │       ├── MainWindow.h
    │   │       └── main.cpp
    │   └── instanceB
    │       ├── CMakeLists.txt
    │       ├── chat.log
    │       ├── config.json
    │       ├── keys
    │       │   ├── my_private.key
    │       │   ├── my_public.key
    │       │   └── peer_public.key
    │       ├── runB.log
    │       ├── runB.pid
    │       └── src
    │           ├── CryptoHelper.cpp
    │           ├── CryptoHelper.h
    │           ├── KeyGen.cpp
    │           ├── MainWindow.cpp
    │           ├── MainWindow.h
    │           └── main.cpp
    ├── keys
    └── src
        ├── CryptoHelper.cpp
        ├── CryptoHelper.h
        ├── KeyGen.cpp
        ├── MainWindow.cpp
        ├── MainWindow.h
        └── main.cpp
```

## Setup Instructions

### C++ / Qt

Use CMake or qmake depending on provided files.

## Usage

- Start the backend server as per setup instructions.
- If there's a frontend, run it separately (often in a `client/` folder).
- Access the app in your browser or via CLI depending on implementation.

## Troubleshooting

- Ensure Node.js or Python version matches project requirements.
- If port conflicts occur, update the `PORT` variable in `.env`.
- For dependency errors, delete `node_modules` or `.venv` and reinstall.
