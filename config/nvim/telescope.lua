-- Default options
require('telescope').setup {
    extensions = {
        fzf = {
            fuzzy = true,
            override_generic_sorter = true,
            override_file_sorter = true,
            case_mode = "smart_case",
        }
    }
}
require('telescope').load_extension('fzf')

local function grep_visual_selection()
    -- Yank the current selection into register "a"
    vim.cmd('normal! "ay')
    -- Get the content of the register "a" and escape spaces
    local visual_selection = vim.fn.escape(vim.fn.getreg('a'), ' ')
    -- Call Telescope live_grep with the escaped visual selection
    vim.cmd('Telescope live_grep default_text=' .. visual_selection)
end

vim.keymap.set('v', '<Leader>fs', grep_visual_selection, { desc = "Grep for selection", noremap = true, silent = true })
