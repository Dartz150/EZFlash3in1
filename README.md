<p align="center">
 <img src="https://www.gamebrew.org/images/2/2e/Gbaexploader2.png"><br>

# EZFlash3in1
Source code for NOR/PSRAM data writing in all EZ-Flash 3in1 models, has support for all existing 3in1 flash chip models (v1,v2,v3).
With this, you can implement EZ-Flash3in1 support to your NDS homebrew projects.

## **What is this for?**

The EZ-Flash 3in1 is a slot 2 expansion pack originally made as a sidekick to the EZ-Flash V for use on the Nintendo DS Phat/lite. It's called 3in1 because it has GBA ,
NDS RAM Expansion Pak, and NDS Rumble Pak Hardware Emulation Support.
Later, it got support in other flashcards by implementing this same code into their Kernels, so you could use it in the go the same as loading NDS Games in their
respective menus.

## Flashcards that currently have *full* EZ-Flash support for their respective Kernels:

- Acekard 2i with AKAIO
- WOOD R4
- cycloDS iEvolution
- M3
- iEdge
- EZ Flash Vi
- iSmart Premuim

## Kernels that currently have *partial* EZ-Flash support (v1 only)
- Wood based Clones (Ace3DS+)
- WAIO
- YSMenu (SRAM Autopatch is not supported, needs to be made manually on PC.)

## Standalonde Loaders that currently have *full* EZ-Flash3in1 support 
- [GBAExploader](https://www.gamebrew.org/wiki/GBA_exploader) by Rudolph
- [GBA Backup Tool](https://www.gamebrew.org/wiki/GBA_Backup_Tool) by Rudolph

## Standalonde Loaders that currently have *partial* EZ-Flash3in1 support
- [GBALdr](https://www.gamebrew.org/wiki/GBALdr) by cory1492
