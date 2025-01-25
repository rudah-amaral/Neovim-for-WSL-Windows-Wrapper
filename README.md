# Neovim-for-WSL-Windows-Wrapper

A C program wrapper that allows you to use Windows' Open With context menu
action with WSL's nvim inside Windows Terminal.

## A word of caution

This C program requires a system call that takes input from the user (you).
While I'm not smart enough to figure out how, a file with a ingenious name could
be used as subterfuge for a injection attack, and I'm to lazy to properly sanitize
those inputs and validate them as proper filenames/absolute pahts. USE AT YOUR
OWN RISK.

## Building

### Requirements

MSYS2 - CLANG64

### Steps

```bash
windres metadata.rc -O coff -o metadata.res
clang -o Neovim.exe wrapper.c metadata.res
```

After that, move the resulting executable anyplace you want. I personally
prefer inside its own folder, nested inside the Program Files one.

Now, you can use the context menu Open With option with the resulting program.

## Customizability

While this is a wrapper for Neovim, it doesn't depends on anything specific to
Neovim. In fact, you could use this repo as a template to create wrappers to all
kinds of programs from all kinds of WSL distros. I'm confident that I made the
`wrapper.c` fairly simple to edit. The first three lines of the main function
should be everything you'd need to mod.
