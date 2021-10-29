# wgpu-mc

## 🚀 A blazing fast alternative renderer for Minecraft
### Discord
https://discord.gg/NTuK8bQ2hn

#### Intro

WebGPU is a new web specification designed to provide modern graphics and compute capabilities in an API.
It is in its very early stages in web browsers, but has had a very promising cycle of development. It's inspired by
Metal & Vulkan's render pipelines, and is able to efficiently provide lower level access to graphics hardware, in a modern
and (relatively) easy to use API. 

`wgpu` is the name of a crate which implements this specification, and it is written in Rust, allowing safe and blazing-fast
use of the WebGPU standard, which makes it a prime candidate for a replacement of Blaze3D.

#### Goals

wgpu-mc is eventually meant to be a full replacement to the standard, official renderer "Blaze3D".
It will be used as a Fabric mod, which will disable the original OpenGL code and interface with wgpu-mc, using the native
Java interface.

#### Fabric

The repo for the Fabric mod which interfaces with wgpu-mc is located at https://github.com/birbe/wgpu-mc-fabric

#### Usage

Grab the assets directory from the Minecraft jar and copy it to /res/assets, and build.

#### Roadmap

World rendering

- [x] Discover and load blockmodels
- [x] Generate a texture atlas of all the block textures 
- [x] Convert the blockmodels into a mesh (somewhat broken)
- [x] Properly assign UVs to the meshes (doesn't handle UV rotation yet)
- [ ] Generate optimized render chunk meshes (working on it)

Gameplay

- [ ] Convert main menu and options menu into compatible code
- [ ] Render the in-game HUD
- [ ] Render the in-game chat
- [ ] Handle block animations

Entity rendering

- [ ] Render entity models
- [ ] Properly render entity parts and their animations

Java Interface

- [ ] Interface with the Fabric mod to use wgpu-mc

Shaders

- [ ] Have built in shaders that mimic the original Minecraft style, and also built-in more advanced shaders
- [ ] Ability to use custom shaders

Maybe features (far future)

- [ ] Combine this project with https://github.com/birbe/jvm to run Minecraft: Java Edition in the browser