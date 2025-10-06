🎮 Cub3D

🧠 About the Project

Cub3D is a project inspired by the first-ever First-Person Shooter (FPS) game from the 90s.
The goal is to recreate a dynamic 3D view inside a maze using ray-casting, simulating depth and perspective through mathematical projections.

This project was developed as part of the 42 curriculum, focusing on:

Computer graphics

Applied mathematics

Optimization

Real-time interaction


⚙️ 42 Coding Standards

This project strictly follows the 42 coding norm, which enforces clean and maintainable code.
Key rules include:

Maximum 25 lines per function

Maximum 5 variables per function

Maximum 4 parameters per function

No ternary operators

Use of my own Libft (custom C utility library)


🧩 Features

3D rendering using ray-casting

Player movement and rotation in real time

Collision detection with walls

Textured walls and dynamic lighting

Map parsing from configuration files


🧠 Technologies Used

Language: C

Graphics Library: MinilibX

Utility Library: Libft (custom)

Algorithms: 2D/3D mathematics, ray-casting, and geometry handling

Tools: Makefile, Norminette


🚀 How to Run

Clone the repository:

git clone https://github.com/yourusername/cub3d.git
cd cub3d


Compile the project:

make


Run the program with a map file:

./cub3D maps/example.cub


🧰 Example of Map File
NO ./textures/wall_north.xpm  
SO ./textures/wall_south.xpm  
WE ./textures/wall_west.xpm  
EA ./textures/wall_east.xpm  
F 220,100,0  
C 225,30,0  

111111  
100001  
101001  
1000N1  
111111  


📚 Learning Outcomes

Through this project, I learned and applied concepts in:

Linear algebra and trigonometry for 3D projection

Real-time rendering and optimization

Memory management in C

Clean coding practices under strict rules

🧾 License

This project is developed for educational purposes as part of the 42 curriculum.
Feel free to explore, learn, and get inspired!
