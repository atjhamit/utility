
Makefile 

target: dependencies
    action



==To make editor aware the a file is a makefile put the following comment as the first line==
# -*- Makefile -*-

==Vimrc to recognise file types==
:filetype plugin on
nnoremap K :m .-2<CR>==
nnoremap J :m .+1<CR>==
se nu
syntax on
set tabstop=4
set shiftwidth=4
set expandtab
