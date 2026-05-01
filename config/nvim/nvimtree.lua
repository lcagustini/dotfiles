require("nvim-tree").setup({
    disable_netrw = true,
    hijack_netrw = false,
    update_cwd = true,
    reload_on_bufenter = true,
    view = {
        float = {
            enable = true,
            open_win_config = function()
                local screen_w = vim.opt.columns:get()
                local screen_h = vim.opt.lines:get() - vim.opt.cmdheight:get()
                local window_w = screen_w * 0.5
                local window_h = screen_h * 0.8
                local window_w_int = math.floor(window_w)
                local window_h_int = math.floor(window_h)
                local center_x = (screen_w - window_w) / 2
                local center_y = ((vim.opt.lines:get() - window_h) / 2) - vim.opt.cmdheight:get()
                return {
                    title = " NvimTree ",
                    title_pos = "center",
                    border = "rounded",
                    relative = "editor",
                    row = center_y,
                    col = center_x,
                    width = window_w_int,
                    height = window_h_int,
                }
            end,
        },
    },
    actions = {
        open_file = {
            -- Open a window in the most recently used position
            window_picker = {
                enable = true,
                picker = function()
                    -- Determine the last-accessed window's number according to Neovim
                    local prev_win_num = vim.fn.winnr('#')
                    print(prev_win_num)
                    -- If 0 is return, it means there is no valid previous window
                    if prev_win_num == 0 then
                        -- No window to return. I think this falls back to the default behavior
                        return 0
                    end
                    -- Convert the window number to its actual Window ID
                    local prev_win_id = vim.fn.win_getid(prev_win_num)
                    return prev_win_id
                end,
            },
        },
    }
})

vim.keymap.set("n", "<Leader>x", function() require("nvim-tree.api").tree.open({ focus = false, find_file = true }) end, { desc = "Explore files" })
vim.keymap.set("n", "<Leader>sv", "<cmd>vsplit<CR>", { desc = "Vertical split window" })
vim.keymap.set("n", "<Leader>sh", "<cmd>split<CR>", { desc = "Horizontal split window" })
