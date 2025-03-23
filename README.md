# Cairo Windows Build

This repository contains project and solution files for building the **Cairo** graphics library and its dependencies (**Pixman, FreeType, libpng, zlib**) for **Windows** using **Visual Studio**.

## Features

- Builds both **static** and **dynamic** libraries
- Supports **Debug** and **Release** configurations
- Compatible with **x86** and **x64** architectures

## Dependencies and Versions

The source code for Cairo and its dependencies is copied into the `packages` folder from the following repositories and tags:

- **Cairo**: [1.18.4](https://gitlab.freedesktop.org/cairo/cairo)
- **Pixman**: [pixman-0.44.2](https://gitlab.freedesktop.org/pixman/pixman)
- **FreeType**: [VER-2-13-3](https://gitlab.freedesktop.org/freetype/freetype.git)
- **libpng**: [v1.6.47] git://git.code.sf.net/p/libpng/code
- **zlib**: [v1.3.1](https://github.com/madler/zlib)

## Getting Started

### Prerequisites

- **Visual Studio** (latest recommended)

### Build Instructions

1. Clone the repository:
   ```sh
   git clone https://github.com/apotocki/cairo-win.git
   cd cairo-win
   ```
2. Open the provided Visual Studio solution (`.sln` file).
3. Select your desired **configuration** (Debug/Release) and **platform** (x86/x64).
4. Build the solution.

## Supporting My Work

If you find this project useful, consider supporting my open-source development by checking out my **iOS application** on the **App Store**:

[<table align="center" border=0 cellspacing=0 cellpadding=0><tr><td><img src="https://is4-ssl.mzstatic.com/image/thumb/Purple112/v4/78/d6/f8/78d6f802-78f6-267a-8018-751111f52c10/AppIcon-0-1x_U007emarketing-0-10-0-85-220.png/460x0w.webp" width="70"/></td><td><a href="https://apps.apple.com/us/app/potohex/id1620963302">PotoHEX</a><br>HEX File Viewer & Editor</td><tr></table>]()

PotoHEX allows you to inspect and edit files at the byte or character level. You can support my work by downloading the app [here](https://apps.apple.com/us/app/potohex/id1620963302)!

## Feedback

Feedback and contributions are always welcome! Feel free to **open an issue** or **submit a pull request**.

---

📧 **Contact:** Reach out via GitHub Issues or email.

Enjoy building Cairo on Windows! 🚀

