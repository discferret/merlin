# Microsoft Developer Studio Project File - Name="wxfreechart_vc6_wxFreeChartDemo_lib" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib Static
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "wxfreechart_vc6_wxFreeChartDemo_lib.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "wxfreechart_vc6_wxFreeChartDemo_lib.mak" CFG="wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib Static"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Debug Monolithic DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Debug Monolithic Static" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Debug Multilib DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Debug Multilib Static" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Release Monolithic DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Release Monolithic Static" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Release Multilib DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static Unicode Release Multilib Static" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Debug Monolithic DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Debug Monolithic Static" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Debug Multilib DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Debug Multilib Static" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Release Monolithic DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Release Monolithic Static" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib DLL" (based on "Win32 (x86) Application")
!MESSAGE "wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib Static" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Debug Monolithic DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswud_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswud_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28ud_freechart.lib wxmsw28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28ud_freechart.lib wxmsw28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Debug Monolithic Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswud\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswud\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28ud_freechart.lib wxmsw28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28ud_freechart.lib wxmsw28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Debug Multilib DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswud_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswud_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28ud_freechart.lib wxmsw28ud_aui.lib wxmsw28ud_core.lib wxbase28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28ud_freechart.lib wxmsw28ud_aui.lib wxmsw28ud_core.lib wxbase28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Debug Multilib Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswud\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswud\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswud" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswud" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28ud_freechart.lib wxmsw28ud_aui.lib wxmsw28ud_core.lib wxbase28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28ud_freechart.lib wxmsw28ud_aui.lib wxmsw28ud_core.lib wxbase28ud.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexud.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Release Monolithic DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswu_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswu_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28u_freechart.lib wxmsw28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28u_freechart.lib wxmsw28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Release Monolithic Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswu\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswu\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28u_freechart.lib wxmsw28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28u_freechart.lib wxmsw28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Release Multilib DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswu_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswu_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28u_freechart.lib wxmsw28u_aui.lib wxmsw28u_core.lib wxbase28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28u_freechart.lib wxmsw28u_aui.lib wxmsw28u_core.lib wxbase28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static Unicode Release Multilib Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswu\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswu\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswu" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "_UNICODE" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "_UNICODE" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswu" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28u_freechart.lib wxmsw28u_aui.lib wxmsw28u_core.lib wxbase28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28u_freechart.lib wxmsw28u_aui.lib wxmsw28u_core.lib wxbase28u.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregexu.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Debug Monolithic DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswd_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswd_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28d_freechart.lib wxmsw28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28d_freechart.lib wxmsw28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Debug Monolithic Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswd\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswd\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28d_freechart.lib wxmsw28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28d_freechart.lib wxmsw28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Debug Multilib DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswd_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswd_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28d_freechart.lib wxmsw28d_aui.lib wxmsw28d_core.lib wxbase28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28d_freechart.lib wxmsw28d_aui.lib wxmsw28d_core.lib wxbase28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Debug Multilib Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmswd\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmswd\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD CPP /nologo /FD /MDd /GR /EHsc /I "$(WXWIN)\lib\vc_lib\mswd" /I "$(WXWIN)\include" /Od /Gm /W4 /I "..\include" /Zi /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXDEBUG__" /D "__WXMSW__" /D "_WINDOWS" /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
# ADD RSC /l 0x409 /d "__WXDEBUG__" /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\mswd" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i "..\sample" /d _DEBUG
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28d_freechart.lib wxmsw28d_aui.lib wxmsw28d_core.lib wxbase28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28d_freechart.lib wxmsw28d_aui.lib wxmsw28d_core.lib wxbase28d.lib wxtiffd.lib wxjpegd.lib wxpngd.lib wxzlibd.lib wxregexd.lib wxexpatd.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /debug /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Release Monolithic DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmsw_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmsw_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28_freechart.lib wxmsw28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28_freechart.lib wxmsw28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Release Monolithic Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmsw\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmsw\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28_freechart.lib wxmsw28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28_freechart.lib wxmsw28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmsw_dll\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmsw_dll\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_dll\wxcode_msw28_freechart.lib wxmsw28_aui.lib wxmsw28_core.lib wxbase28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_dll\wxcode_msw28_freechart.lib wxmsw28_aui.lib wxmsw28_core.lib wxbase28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ELSEIF  "$(CFG)" == "wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib Static"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "..\sample"
# PROP BASE Intermediate_Dir "vcmsw\wxFreeChartDemo_lib"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "..\sample"
# PROP Intermediate_Dir "vcmsw\wxFreeChartDemo_lib"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD CPP /nologo /FD /MD /GR /EHsc /I "$(WXWIN)\lib\vc_lib\msw" /I "$(WXWIN)\include" /O2 /W4 /I "..\include" /Fd..\sample\wxFreeChartDemo_lib.pdb /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXMSW__" /D "_WINDOWS" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
# ADD RSC /l 0x409 /d "__WXMSW__" /i "$(WXWIN)\lib\vc_lib\msw" /i "$(WXWIN)\include" /i "..\include" /d "_WINDOWS" /i ..\sample
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 ..\lib\vc_lib\wxcode_msw28_freechart.lib wxmsw28_aui.lib wxmsw28_core.lib wxbase28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"
# ADD LINK32 ..\lib\vc_lib\wxcode_msw28_freechart.lib wxmsw28_aui.lib wxmsw28_core.lib wxbase28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib oleacc.lib /nologo /machine:i386 /out:"..\sample\wxFreeChartDemo_lib.exe" /libpath:"$(WXWIN)\lib\vc_lib" /libpath:"..\lib\vc_lib" /subsystem:windows /pdb:"..\sample\wxFreeChartDemo_lib.pdb"

!ENDIF

# Begin Target

# Name "wxFreeChartDemo_lib - Win32 Static Unicode Debug Monolithic DLL"
# Name "wxFreeChartDemo_lib - Win32 Static Unicode Debug Monolithic Static"
# Name "wxFreeChartDemo_lib - Win32 Static Unicode Debug Multilib DLL"
# Name "wxFreeChartDemo_lib - Win32 Static Unicode Debug Multilib Static"
# Name "wxFreeChartDemo_lib - Win32 Static Unicode Release Monolithic DLL"
# Name "wxFreeChartDemo_lib - Win32 Static Unicode Release Monolithic Static"
# Name "wxFreeChartDemo_lib - Win32 Static Unicode Release Multilib DLL"
# Name "wxFreeChartDemo_lib - Win32 Static Unicode Release Multilib Static"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Debug Monolithic DLL"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Debug Monolithic Static"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Debug Multilib DLL"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Debug Multilib Static"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Release Monolithic DLL"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Release Monolithic Static"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib DLL"
# Name "wxFreeChartDemo_lib - Win32 Static ANSI Release Multilib Static"
# Begin Group "Source Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\sample\bardemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\bubbledemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\combinedaxisdemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\demo.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\democollection.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\ganttdemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\markersdemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\multipleaxisdemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\ohlcdemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\timeseriesdemos.cpp
# End Source File
# Begin Source File

SOURCE=..\sample\xydemos.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\sample\demo.h
# End Source File
# Begin Source File

SOURCE=..\sample\democollection.h
# End Source File
# End Group
# End Target
# End Project

