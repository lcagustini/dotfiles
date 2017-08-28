" A minimal vimrc for new vim users to start with.
"
" Referenced here: http://vimuniversity.com/samples/your-first-vimrc-should-be-nearly-empty
"
" Original Author:	     Bram Moolenaar <Bram@vim.org>
" Made more minimal by:  Ben Orenstein
" Modified by :          Ben McCormick
" Last change:	         2014 June 8
"
" To use it, copy it to
"  for Unix based systems (including OSX and Linux):  ~/.vimrc
"  for Windows :  $VIM\_vimrc
"
"  If you don't understand a setting in here, just type ':h setting'.

call plug#begin('~/.vim/plugged')

Plug 'airblade/vim-gitgutter'
Plug 'rakr/vim-one'
Plug 'vim-airline/vim-airline'
Plug 'miyakogi/sidepanel.vim'
Plug 'scrooloose/nerdtree'

call plug#end()

" Use Vim settings, rather than Vi settings (much better!).
" This must be first, because it changes other options as a side effect.
set nocompatible
set termguicolors

" Make backspace behave in a sane manner.
set backspace=indent,eol,start

" Switch syntax highlighting on
syntax on

" Enable file type detection and do language-dependent indenting.
filetype plugin indent on

" Show line numbers
set number

" Allow hidden buffers, don't limit to 1 file per window/split
set hidden

nnoremap <F8>  :tabnext<CR>
nnoremap <F7>  :tabprev<CR>

set expandtab
set tabstop=4
set shiftwidth=4

set incsearch

set undofile
set undodir=~/.config/nvim/undo/

set laststatus=2

colorscheme one
let g:one_allow_italics = 1
set background=dark

let g:airline_powerline_fonts = 1
let g:airline_theme='one'

set backupdir=$HOME/.vim/swapfiles//
set directory=$HOME/.vim/swapfiles//

let g:sidepanel_width = 24
let g:sidepanel_config = {}
let g:sidepanel_config['nerdtree'] = {}

autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTree") && b:NERDTree.isTabTree()) | q | endif
autocmd vimenter * SidePanel nerdtree
