# cub3d

## Project Description

The `cub3d` project is part of the School 42 curriculum, designed to introduce you to the fundamentals of 3D graphics programming and game development. The goal of this project is to create a basic 3D game using the ray-casting technique, similar to early first-person shooter games like Wolfenstein 3D.

## What It Does

The `cub3d` program is a first-person perspective game where the player navigates through a 3D-rendered environment. The game uses a 2D map as the basis for rendering a 3D scene, allowing the player to move around and view the world from different angles.

## Implementation Details

- **Language**: The project is implemented in C.
- **Libraries**:
  - **MiniLibX**: Used for graphics rendering and handling window events.
  - **math.h**: Used for mathematical functions necessary for ray-casting.
- **Game Features**:
  - **Map Parsing**: Reads and parses a map file to set up the game environment.
  - **Player Movement**: Allows the player to move forward, backward, and rotate left and right.
  - **Ray-casting**: Renders the 3D environment based on the 2D map using ray-casting.
  - **Texture Mapping**: Applies textures to the walls for a more realistic appearance.
  - **Graphical Display**: Renders the game scene and handles user input using MiniLibX.
- **Headers**:
  - `#include <mlx.h>`: For MiniLibX functions.
  - `#include <stdlib.h>`: For memory management.
  - `#include <unistd.h>`: For standard input/output.
  - `#include <fcntl.h>`: For file operations.
  - `#include <math.h>`: For mathematical calculations.

### How It Works

1. **Map Parsing**:
   - Reads a map file (typically `.cub` format) to initialize the game grid.
   - Validates the map to ensure it contains walls, a player start position, and other essential elements.
   - Example map:
     ```
     111111
     100001
     102001
     100001
     111111
     ```
     - `1` represents walls.
     - `0` represents empty spaces.
     - `2` represents sprites (optional).
     - `N`, `S`, `E`, `W` represent the player's starting position and initial orientation.

2. **Initializing Game State**:
   - Sets up the game window using MiniLibX.
   - Loads textures for walls and sprites.
   - Initializes the player's starting position and direction.

3. **Ray-casting**:
   - For each vertical stripe on the screen, cast a ray from the player's position.
   - Calculate the distance to the nearest wall and use this distance to determine the height of the wall to draw.
   - Apply textures to the walls based on the intersection point.

4. **Event Handling**:
   - Listens for keyboard events to move the player forward, backward, and rotate left and right.
   - Updates the player's position and view direction based on input.

5. **Rendering Graphics**:
   - Continuously renders the 3D scene from the player's perspective.
   - Draws the walls, floor, ceiling, and sprites in the correct order to create the illusion of depth.

6. **Game Logic**:
   - Ensures the player can only move to valid positions.
   - Handles interactions with the environment and potentially enemies or items.

This project provides a comprehensive exercise in 3D graphics programming and game development, building essential skills for creating interactive and immersive applications.
