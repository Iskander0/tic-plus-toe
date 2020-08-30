#include <raylib.h> // Raylib. // Tic-Tac-Toe game.
int main() {
	SetConfigFlags(FLAG_VSYNC_HINT); // Enable V-SYNC.
	InitWindow(300, 300, "Tic++"); // Create window 300x300 with title "Tic++".
	SetTargetFPS(60); // Cap the FPS at 60.
	// Grid horizontal line #1.
	int ln1StartPosX = 0  ;
	int ln1StartPosY = 100;
	int ln1EndPosX   = 300;
	int ln1EndPosY   = 100;
	// Grid horizontal line #2.
	int ln2StartPosX = 0  ;
	int ln2StartPosY = 200;
	int ln2EndPosX   = 300;
	int ln2EndPosY   = 200;
	// Grid vertical line #1.
	int ln3StartPosX = 100;
	int ln3StartPosY = 0  ;
	int ln3EndPosX   = 100;
	int ln3EndPosY   = 300;
	// Grid vertical line #2.
	int ln4StartPosX = 200;
	int ln4StartPosY = 0  ;
	int ln4EndPosX   = 200;
	int ln4EndPosY   = 300;
	// Class circle.
	class cr {
		public:
			int centerX ;
			int centerY ;
			float radius;
			Color color ;
			bool is     ;
	};
	// Class rectangle.
	class rc {
		public:
			int posX   ;
			int posY   ;
			int width  ;
			int height  ;
			Color color;
			bool is    ;
	};
	// Create circles.
	cr circle1;
	circle1.centerX = 50      ;
	circle1.centerY = 50      ;
	circle1.radius  = 20      ;
	circle1.color   = BLANK   ;
	circle1.is      = false   ;

	cr circle2;
	circle2.centerX = 150     ;
	circle2.centerY = 50      ;
	circle2.radius  = 20      ;
	circle2.color   = BLANK   ;
	circle2.is      = false   ;

	cr circle3;
	circle3.centerX = 250     ;
	circle3.centerY = 50      ;
	circle3.radius  = 20      ;
	circle3.color   = BLANK   ;
	circle3.is      = false   ;

	cr circle4;
	circle4.centerX = 50      ;
	circle4.centerY = 150     ;
	circle4.radius  = 20      ;
	circle4.color   = BLANK   ;
	circle4.is      = false   ;

	cr circle5;
	circle5.centerX = 150     ;
	circle5.centerY = 150     ;
	circle5.radius  = 20      ;
	circle5.color   = BLANK   ;
	circle5.is      = false   ;

	cr circle6;
	circle6.centerX = 250     ;
	circle6.centerY = 150     ;
	circle6.radius  = 20      ;
	circle6.color   = BLANK   ;
	circle6.is      = false   ;

	cr circle7;
	circle7.centerX = 50      ;
	circle7.centerY = 250     ;
	circle7.radius  = 20      ;
	circle7.color   = BLANK   ;
	circle7.is      = false   ;

	cr circle8;
	circle8.centerX = 150     ;
	circle8.centerY = 250     ;
	circle8.radius  = 20      ;
	circle8.color   = BLANK   ;
	circle8.is      = false   ;

	cr circle9;
        circle9.centerX = 250     ;
	circle9.centerY = 250     ;
	circle9.radius  = 20      ;
	circle9.color   = BLANK   ;
	circle9.is      = false   ;
	// Create rectangles.
	rc rectangle1;
	rectangle1.posX   = 30    ;
	rectangle1.posY   = 30    ;
	rectangle1.width  = 40    ;
	rectangle1.height = 40    ;
	rectangle1.color  = BLANK ;
	rectangle1.is     = false ;

        rc rectangle2;
        rectangle2.posX   = 130   ;
        rectangle2.posY   = 30    ;
        rectangle2.width  = 40    ;
        rectangle2.height = 40    ;
        rectangle2.color  = BLANK ;
	rectangle2.is     = false ;

        rc rectangle3;
        rectangle3.posX   = 230   ;
        rectangle3.posY   = 30    ;
        rectangle3.width  = 40    ;
        rectangle3.height = 40    ;
        rectangle3.color  = BLANK ;
	rectangle3.is     = false ;

        rc rectangle4;
        rectangle4.posX   = 30    ;
        rectangle4.posY   = 130   ;
        rectangle4.width  = 40    ;
        rectangle4.height = 40    ;
        rectangle4.color  = BLANK ;
	rectangle4.is     = false ;

        rc rectangle5;
        rectangle5.posX   = 130   ;
        rectangle5.posY   = 130   ;
        rectangle5.width  = 40    ;
        rectangle5.height = 40    ;
        rectangle5.color  = BLANK ;
	rectangle5.is     = false ;

        rc rectangle6;
        rectangle6.posX   = 230   ;
        rectangle6.posY   = 130   ;
        rectangle6.width  = 40    ;
        rectangle6.height = 40    ;
        rectangle6.color  = BLANK ;
	rectangle6.is     = false ;

        rc rectangle7;
        rectangle7.posX   = 30    ;
        rectangle7.posY   = 230   ;
        rectangle7.width  = 40    ;
        rectangle7.height = 40    ;
        rectangle7.color  = BLANK ;
	rectangle7.is     = false ;

        rc rectangle8;
        rectangle8.posX   = 130   ;
        rectangle8.posY   = 230   ;
        rectangle8.width  = 40    ;
        rectangle8.height = 40    ;
        rectangle8.color  = BLANK ;
	rectangle8.is     = false ;

        rc rectangle9;
        rectangle9.posX   = 230   ;
        rectangle9.posY   = 230   ;
        rectangle9.width  = 40    ;
        rectangle9.height = 40    ;
        rectangle9.color  = BLANK ;
	rectangle9.is     = false ;

	// Maing game loop.
	while (!WindowShouldClose()) {
		// Field fill logic.
		if ((GetMouseX() > 0) && (GetMouseX() < 100) && (GetMouseY() > 0) && (GetMouseY() < 100)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle1.is)) {
				circle1.color = BLACK;
				circle1.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle1.is)) {
				rectangle1.color = BLACK;
				rectangle1.is = true;
			}
		}
		if ((GetMouseX() > 100) && (GetMouseX() < 200) && (GetMouseY() > 0) && (GetMouseY() < 100)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle2.is)) {
				circle2.color = BLACK;
				circle2.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle2.is)) {
				rectangle2.color = BLACK;
				rectangle2.is = true;
			}
		}
		if ((GetMouseX() > 200) && (GetMouseX() < 300) && (GetMouseY() > 0) && (GetMouseY() < 100)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle3.is)) {
				circle3.color = BLACK;
				circle3.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle3.is)) {
				rectangle3.color = BLACK;
				rectangle3.is = true;
			}
		}
		if ((GetMouseX() > 0) && (GetMouseX() < 100) && (GetMouseY() > 100) && (GetMouseY() < 200)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle4.is)) {
				circle4.color = BLACK;
				circle4.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle4.is)) {
				rectangle4.color = BLACK;
				rectangle4.is = true;
			}
		}
		if ((GetMouseX() > 100) && (GetMouseX() < 200) && (GetMouseY() > 100) && (GetMouseY() < 200)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle5.is)) {
				circle5.color = BLACK;
				circle5.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle5.is)) {
				rectangle5.color = BLACK;
				rectangle5.is = true;
			}
		}
		if ((GetMouseX() > 200) && (GetMouseX() < 300) && (GetMouseY() > 100) && (GetMouseY() < 200)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle6.is)) {
				circle6.color = BLACK;
				circle6.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle6.is)) {
				rectangle6.color = BLACK;
				rectangle6.is = true;
			}
		}
		if ((GetMouseX() > 0) && (GetMouseX() < 100) && (GetMouseY() > 200) && (GetMouseY() < 300)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle7.is)) {
				circle7.color = BLACK;
				circle7.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle7.is)) {
				rectangle7.color = BLACK;
				rectangle7.is = true;
			}
		}
		if ((GetMouseX() > 100) && (GetMouseX() < 200) && (GetMouseY() > 200) && (GetMouseY() < 300)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle8.is)) {
				circle8.color = BLACK;
				circle8.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle8.is)) {
				rectangle8.color = BLACK;
				rectangle8.is = true;
			}
		}
		if ((GetMouseX() > 200) && (GetMouseX() < 300) && (GetMouseY() > 200) && (GetMouseY() < 300)) {
			if ((IsMouseButtonPressed(0)) && (!rectangle9.is)) {
				circle9.color = BLACK;
				circle9.is = true;
			}
			if ((IsMouseButtonPressed(1)) && (!circle9.is)) {
				rectangle9.color = BLACK;
				rectangle9.is = true;
			}
		}
		// Game reset code.
		if (IsKeyPressed(KEY_SPACE)) {
			circle1.color = BLANK; circle1.is = false;
			rectangle1.color = BLANK; rectangle1.is = false;
			circle2.color = BLANK; circle2.is = false;
			rectangle2.color = BLANK; rectangle2.is = false;
			circle3.color = BLANK; circle3.is = false;
			rectangle3.color = BLANK; rectangle3.is = false;
			circle4.color = BLANK; circle4.is = false;
			rectangle4.color = BLANK; rectangle4.is = false;
			circle5.color = BLANK; circle5.is = false;
			rectangle5.color = BLANK; rectangle5.is = false;
			circle6.color = BLANK; circle6.is = false;
			rectangle6.color = BLANK; rectangle6.is = false;
			circle7.color = BLANK; circle7.is = false;
			rectangle7.color = BLANK; rectangle7.is = false;
			circle8.color = BLANK; circle8.is = false;
			rectangle8.color = BLANK; rectangle8.is = false;
			circle9.color = BLANK; circle9.is = false;
			rectangle9.color = BLANK; rectangle9.is = false;
		}
		// Render.
		BeginDrawing();
        	ClearBackground(RAYWHITE);
		// Draw grid.
		DrawLine(ln1StartPosX, ln1StartPosY, ln1EndPosX, ln1EndPosY, BLACK); // Draw horizontal grid line #1.
		DrawLine(ln2StartPosX, ln2StartPosY, ln2EndPosX, ln2EndPosY, BLACK); // Draw horizontal grid line #2.
		DrawLine(ln3StartPosX, ln3StartPosY, ln3EndPosX, ln3EndPosY, BLACK); // Draw vertical grid line #1.
		DrawLine(ln4StartPosX, ln4StartPosY, ln4EndPosX, ln4EndPosY, BLACK); // Draw vertical grid line #2.
		// Draw circles.
		DrawCircle(circle1.centerX, circle1.centerY, circle1.radius, circle1.color);
		DrawCircle(circle2.centerX, circle2.centerY, circle2.radius, circle2.color);
		DrawCircle(circle3.centerX, circle3.centerY, circle3.radius, circle3.color);
		DrawCircle(circle4.centerX, circle4.centerY, circle4.radius, circle4.color);
		DrawCircle(circle5.centerX, circle5.centerY, circle5.radius, circle5.color);
		DrawCircle(circle6.centerX, circle6.centerY, circle6.radius, circle6.color);
		DrawCircle(circle7.centerX, circle7.centerY, circle7.radius, circle7.color);
		DrawCircle(circle8.centerX, circle8.centerY, circle8.radius, circle8.color);
		DrawCircle(circle9.centerX, circle9.centerY, circle9.radius, circle9.color);
		// Draw rectangles.
                DrawRectangle(rectangle1.posX, rectangle1.posY, rectangle1.width, rectangle1.height, rectangle1.color);
                DrawRectangle(rectangle2.posX, rectangle2.posY, rectangle2.width, rectangle2.height, rectangle2.color);
		DrawRectangle(rectangle3.posX, rectangle3.posY, rectangle3.width, rectangle3.height, rectangle3.color);
		DrawRectangle(rectangle4.posX, rectangle4.posY, rectangle4.width, rectangle4.height, rectangle4.color);
		DrawRectangle(rectangle5.posX, rectangle5.posY, rectangle5.width, rectangle5.height, rectangle5.color);
		DrawRectangle(rectangle6.posX, rectangle6.posY, rectangle6.width, rectangle6.height, rectangle6.color);
		DrawRectangle(rectangle7.posX, rectangle7.posY, rectangle7.width, rectangle7.height, rectangle7.color);
		DrawRectangle(rectangle8.posX, rectangle8.posY, rectangle8.width, rectangle8.height, rectangle8.color);
		DrawRectangle(rectangle9.posX, rectangle9.posY, rectangle9.width, rectangle9.height, rectangle9.color);
		EndDrawing();
	}
	CloseWindow();
}
