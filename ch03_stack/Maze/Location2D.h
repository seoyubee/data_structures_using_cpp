#pragma once
class Location2D
{
public:
	int row, col;
	bool isNear(const Location2D& p)
	{
		return (row == p.row && (col == p.col - 1 || p.col + 1))
			|| (col == p.col && (row == p.row - 1 || row == p.row + 1));
	}
	// ������ �����ε� ���
	bool operator==(const Location2D& p) { return row == p.row && col == p.col; }
	Location2D(int r = 0, int c = 0) : row{r}, col{c} {}
};

