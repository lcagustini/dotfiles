vim.lsp.enable("clangd")
vim.lsp.config.clangd.root_markers = { "compile_commands.json" }

vim.keymap.set("n", "gd", function() vim.lsp.buf.definition() end, { desc = "Go to definition" })
vim.keymap.set("n", "gD", function() vim.lsp.buf.declaration() end, { desc = "Go to declaration" })
vim.keymap.set("n", "gt", function() vim.lsp.buf.type_definition() end, { desc = "Go to type definition" })
vim.keymap.set("n", "gu", function() require('telescope.builtin').lsp_references() end, { desc = "Go to usages" })

vim.keymap.set("n", "<Leader>cd", function() vim.diagnostic.open_float({ scope = "line" }) end, { desc = "Show line diagnostics" })
vim.keymap.set("n", "<Leader>ca", function() vim.lsp.buf.code_action() end, { desc = "Suggest code action" })
vim.keymap.set("n", "<Leader>cf", function() vim.lsp.buf.format({ async = true }) end, { desc = "Format selection" })
vim.keymap.set("n", "<Leader>cr", function() vim.lsp.buf.rename() end, { desc = "Rename symbol" })

vim.diagnostic.config({
    signs = false,
    underline = false
})

vim.api.nvim_create_autocmd({ "VimEnter" }, {
    callback = function()
        local clients = vim.lsp.get_clients()
        for _, client in ipairs(clients) do
            local id = client.id
            vim.lsp.completion.enable(true, id, 1, { autotrigger = true })
            return
        end
    end,
})
