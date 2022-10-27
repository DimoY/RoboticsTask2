#pragma once
enum class FieldType {
	CYAN,
	PURPLE,
	BLUE,
	GREEN,
	RED,
	WALL,
	END
};

FieldType getCrystalType(char marker) {

	switch (marker) {
	case 'c':
		return FieldType::CYAN;
	case 'p':
		return FieldType::PURPLE;
	case 'b':
		return FieldType::BLUE;
	case 'g':
		return FieldType::GREEN;
	case 'r':
		return FieldType::RED;
	case 'X':
		return FieldType::WALL;
	case '#':
		return FieldType::END;
	default:
		return FieldType::RED;
	}
}

char getLetterBack(FieldType marker) {

	switch (marker) {
	case FieldType::CYAN:
		return 'c';
	case FieldType::PURPLE:
		return 'p';
	case FieldType::BLUE:
		return 'b';
	case FieldType::GREEN:
		return 'g';
	case FieldType::RED:
		return 'r';
	case FieldType::WALL:
		return 'X';
	case FieldType::END:
		return '#';
	default:
		return 'n';
	}
}