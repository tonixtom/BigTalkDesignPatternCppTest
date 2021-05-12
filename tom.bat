@echo off
set bat_path=%~dp0
cd /d %bat_path%
for /f "tokens=*" %%i in ('dir /b /s .idea') do (
    echo %%i
 rmdir /s /q %%i
rem del /s /q %%i
)



for /f "tokens=*" %%i in ('dir /b /s cmake-build-debug') do (
    echo %%i
 rmdir /s /q %%i
rem del /s /q %%i
)
pause