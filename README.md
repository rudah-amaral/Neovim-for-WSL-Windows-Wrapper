# Neovim-for-WSL-Windows-Wrapper

A C program wrapper that allows you to use Windows' Open With context menu
action with WSL's nvim. More Than that, it opens Neovim inside Windows Terminal!

## !WARNING!

This C program requires a system call that takes input from the user (you).
While I'm not smart enough to figure out how, a file with a ingenious name could
be used as subterfuge for a injection attack, and I'm to lazy to properly sanitize
those inputs and validate them as proper filenames/absolute pahts. USE AT YOUR
OWN RISK.

## Building

### Requirements

WSL (duh)

Neovim (duh)

Windows Terminal

MSYS2 - CLANG64

### Steps

```bash
windres icon.rc -O coff -o icon.res
clang -o Neovim.exe wrapper.c icon.res
```

After that, move the resulting executable anyplace you want. I personally
prefer inside its own folder, nested inside the Program Files one.

Now, you can use the context menu Open With option with the resulting program.

## Pending Issues

In the Open With context menu, the wrapper is labeled as "Win32 Cabinet Self
Extractor". I don't know why or how to fix it.

Although the program itself has an icon, I wasn't able to make associated files
take the same icon. While I don't figure this one out I'll recommend using
Default Program Editor as a quick fix.

## Customizability

While this is a wrapper for Neovim, it doesn't depends on anything specific to
Neovim. In fact, you could use this repo as a template to create wrappers to all
kinds of programs from all kinds of WSL distros. I'm confident that I made the
`wrapper.c` fairly simple to edit. The first three lines of the main function
should be everything you'd need to mod.
