#include "add.h"

int mul(int x, int y)
/// x = 3, y = 5
{
	int i = 0;		/// 반복문용 변수
	int sum = 0;	/// 누적 값 보관 변수
	/// 3 * 5 = 3 + 3 + 3 + 3 + 3

	for (i = 0; i < y; i++)
	{
		sum = add(x, sum);
		/// 3, 0 => 3 = sum
		/// 3, 3 => 6
		/// 3, 6 => 9
	}

	return sum;
}
