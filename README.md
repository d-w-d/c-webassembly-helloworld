# C-Webassembly Hello World

## Overview

Repo to explore compilation of C code to browser-runnable application using webaassembly (using escripten).

## \*NIX Quick Start

1. Install emscripten; see [here](https://emscripten.org/docs/getting_started/downloads.html#platform-notes-installation-instructions-sdk) for instructions

2. Once the emscripten c compiler `emcc` is available, use it to compile our source code as follows:

```bash
emcc hello.c -s WASM=1 -o hello.html
``` 

3. Step 2 will output an html, js and wasm file; run the html file from an http server to see the result. E.g. with node installed, run `npm install -g http-server; http-server -p 3333` and go to `localhost:3333`

