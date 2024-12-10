@echo off
chcp 65001 > log
del log

set CPP_FILES="universities.cpp menu_items.cpp menu_functions.cpp"
set EXE=obuchaika.exe
set CHARSET="-finput-charset=utf-8 -fexec-charset=windows-1251"

if exist %EXE% del %EXE%

::g++ "%CHARSET%" "%CPP_FILES%" -o %EXE%
g++ "%CPP_FILES%" -o %EXE%

%EXE%
