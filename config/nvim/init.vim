"  If you don't understand a setting in here, just type ':h setting'.

call plug#begin('$HOME/.config/nvim/plugged')

Plug 'nvim-tree/nvim-web-devicons'
Plug 'ellisonleao/gruvbox.nvim'

Plug 'nvim-lua/plenary.nvim'
Plug 'nvim-telescope/telescope.nvim'
Plug 'nvim-telescope/telescope-fzf-native.nvim', { 'do': 'make' }

Plug 'nvim-treesitter/nvim-treesitter', { 'do': ':TSUpdate' }
Plug 'neovim/nvim-lspconfig'

Plug 'nvim-tree/nvim-tree.lua'
Plug 'folke/which-key.nvim'

Plug 'akinsho/bufferline.nvim', { 'tag': '*' }
Plug 'nvim-lualine/lualine.nvim'

Plug 'airblade/vim-gitgutter'

call plug#end()

" Use Vim settings, rather than Vi settings (much better!).
" This must be first, because it changes other options as a side effect.
set nocompatible

" Disable netrw so it won't mess with nvim-tree
let g:loaded_netrw=1
let g:loaded_netrwPlugin=1

" Use 25-bit (true-color) mode
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

" Highlight cursor line
set cursorline

" Set leader to comma
let mapleader=","

" Turn on the Wild menu and ignore compiled files
set wildmenu
set wildignore=*.o,*~,*.pyc
if has("win16") || has("win32")
    set wildignore+=.git\*,.hg\*,.svn\*
else
    set wildignore+=*/.git/*,*/.hg/*,*/.svn/*,*/.DS_Store
endif

" Set tab width
set expandtab
set tabstop=4
set shiftwidth=4

" Search as you type
set incsearch

" Ignore case when searching, unless there is upper case in the search
set ignorecase
set smartcase

" A buffer becomes hidden when it is abandoned
set hid

" Setup undo and swap save directories
set undofile
set undodir=$HOME/.config/nvim/undo/

set backupdir=$HOME/.vim/swapfiles//
set directory=$HOME/.vim/swapfiles//

" Always show bottom status line
set laststatus=2

" Theme
colorscheme gruvbox
set background=dark
let g:gruvbox_contrast_dark='dark'

" Enable mouse
set mouse=a

" Buffer navigation
nnoremap <leader>l <cmd>bn<cr>
nnoremap <leader>h <cmd>bN<cr>
nnoremap <leader>q <cmd>bd<cr>

" Swap buffers on splits
function! MarkWindowSwap()
    let g:markedWinNum = winnr()
endfunction

function! DoWindowSwap()
    " Mark destination
    let curNum = winnr()
    let curBuf = bufnr( '%' )
    exe g:markedWinNum . "wincmd w"
    " Switch to source and shuffle dest->source
    let markedBuf = bufnr( '%' )
    " Hide and open so that we aren't prompted and keep history
    exe 'hide buf' curBuf
    " Switch to dest shuffle source->dest
    exe curNum . "wincmd w"
    " Hide and open so that we aren't prompted and keep history
    exe 'hide buf' markedBuf
endfunction

nmap <silent> <leader>wy :call MarkWindowSwap()<CR>
nmap <silent> <leader>wp :call DoWindowSwap()<CR>

" Telescope keymap
nnoremap <leader>ff <cmd>Telescope find_files<CR>
nnoremap <leader>fg <cmd>Telescope live_grep<CR>
nnoremap <leader>fb <cmd>Telescope buffers<CR>
nnoremap <leader>fh <cmd>Telescope help_tags<CR>

" Plugin initialization
if has('nvim')
    luafile $HOME/.config/nvim/nvimtree.lua
    luafile $HOME/.config/nvim/lsp.lua
    luafile $HOME/.config/nvim/telescope.lua
    luafile $HOME/.config/nvim/lualine.lua
    luafile $HOME/.config/nvim/bufferline.lua
    luafile $HOME/.config/nvim/treesitter.lua
endif

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
