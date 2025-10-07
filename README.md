# 🎮 Cub3D

> A ray-casting 3D maze project inspired by the first-ever FPS game.  
> Developed as part of the **42 curriculum**, written in **C**, and built under strict coding standards.

---

## 🧠 About the Project

**Cub3D** is inspired by the legendary 90s game that pioneered the FPS genre.  
The goal is to recreate a **3D perspective inside a maze** using **ray-casting**, simulating depth and distance.

This project focuses on:
- 🧩 Computer graphics  
- 🧮 Applied mathematics  
- ⚙️ Optimization  
- ⏱️ Real-time interaction  

---

<details>
<summary>⚙️ 42 Coding Standards</summary>

This project was developed following **42’s strict coding standards**:

- 📏 Functions under **25 lines**  
- 💡 Maximum **5 variables** per function  
- 🧱 Maximum **4 parameters** per function  
- 🚫 **No ternary operators** allowed  
- 🧰 Use of my own **Libft** library (custom C utility library)

</details>

---

<details>
<summary>🧩 Features</summary>

- ✅ Real-time 3D rendering using **ray-casting**  
- ✅ Player movement and rotation  
- ✅ Collision detection with walls  
- ✅ Textured walls and simple lighting effects  
- ✅ Map parsing from `.cub` configuration files  

</details>

---

<details>
<summary>🧠 Technologies Used</summary>

- **Language:** C  
- **Graphics Library:** MinilibX  
- **Utility Library:** Libft (custom)  
- **Algorithms:** 2D/3D mathematics, ray-casting, geometry handling  
- **Tools:** Makefile, Norminette  

</details>

---

<details>
<summary>🚀 How to Run</summary>

1. **Clone the repository**
   ```bash
   git clone https://github.com/scarlos42/cub3D.git
   cd cub3d
2. **Compile the project**
   ```bash
   make
. **Run the program**
   ```bash
   ./cub3D map.cub
   ```
</details>

---

<details>
<summary>🧾 Example of Map File</summary>

   ```text

   NO textures/oldcolor.xpm
   SO textures/south.xpm
   WE textures/color-stone.xpm
   EA textures/geometrica.xpm
  
   F 128, 128, 128
   C 135, 206, 235
    
   1111111111111111111111
   10000000000000000011
   11010000111111100000111
   110000101   100111000111111
   100000001  110000000111111
   100000011111000000011
   1000000000000000000001
   1000000000000000000001
   1000000000000000000001
   1000000000000000010011
   1000000000000000000001
   1000000000000000000001
   1000000000N00000000001
   1000000000000000000001
   1111111111111111111111
   ```
</details>

---

<details> <summary>📚 Learning Outcomes</summary>

Through this project, I deepened my understanding of:

🔢 Linear algebra and trigonometry for 3D rendering

⚡ Real-time performance and optimization

💾 Memory management in C

🧼 Writing clean, maintainable code under strict rules

</details>

---

🧾 License

This project was developed for educational purposes as part of the 42 curriculum, with contributions by [dsteiger42](https://github.com/dsteiger42).

Feel free to explore, learn, and build upon it! 🚀

