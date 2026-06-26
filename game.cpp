#include <raylib.h>

int main() {
    // 1. Initialize the window
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "My First C++ Game");

    // Ball position variables
    Vector2 ballPosition = { (float)screenWidth/2, (float)screenHeight/2 };
    float ballSpeed = 4.0f;

    SetTargetFPS(60); // Set the game to run at 60 frames per second

    // 2. The Game Loop
    while (!WindowShouldClose()) { // Detect window close button or ESC key
        
        // --- UPDATE ---
        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += ballSpeed;
        if (IsKeyDown(KEY_LEFT))  ballPosition.x -= ballSpeed;
        if (IsKeyDown(KEY_UP))    ballPosition.y -= ballSpeed;
        if (IsKeyDown(KEY_DOWN))  ballPosition.y += ballSpeed;

        // --- DRAW ---
        BeginDrawing();
            ClearBackground(RAYWHITE);
            
            DrawText("Move the ball with arrow keys!", 10, 10, 20, DARKGRAY);
            DrawCircleV(ballPosition, 50, MAROON); // Draw our player ball
            
        EndDrawing();
    }

    // 3. De-Initialization
    CloseWindow();        // Close window and OpenGL context
    return 0;
}