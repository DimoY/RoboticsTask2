//Corresponding header
#include "robo_common/layout/field/FieldPos.h"

//System headers

//Other libraries headers

//Own components headers

FieldPos::FieldPos(int32_t inputRow, int32_t inputCol) {
  row = inputRow;
  col = inputCol;
}

bool FieldPos::operator==(const FieldPos& other) const {
  return (row == other.row && col == other.col);
}

bool FieldPos::operator<(const FieldPos& other) const {
  if (row == other.row) {
    return col < other.col;
  }

  return row < other.row;
}
