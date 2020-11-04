"  If you don't understand a setting in here, just type ':h setting'.

call plug#begin('~/.vim/plugged')

Plug 'airblade/vim-gitgutter'
Plug 'morhetz/gruvbox'
Plug 'vim-airline/vim-airline'
Plug 'cespare/vim-toml'

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

set cursorline

set expandtab
set tabstop=4
set shiftwidth=4

set incsearch

set undofile
set undodir=~/.config/nvim/undo/

set laststatus=2

colorscheme gruvbox
set background=dark

let g:airline_powerline_fonts = 1
let g:airline_theme='gruvbox'

set backupdir=$HOME/.vim/swapfiles//
set directory=$HOME/.vim/swapfiles//

set mouse=a

" for hex editing
augroup Binary
  au!
  au BufReadPre  *.nes let &bin=1
  au BufReadPost *.nes if &bin | %!xxd
  au BufReadPost *.nes set ft=xxd | endif
  au BufWritePre *.nes if &bin | %!xxd -r
  au BufWritePre *.nes endif
  au BufWritePost *.nes if &bin | %!xxd
  au BufWritePost *.nes set nomod | endif
augroup END
