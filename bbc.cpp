#include <stdio.h>

// Up to 64 bits long, unsigned integer.
// define bitboard data type.
#define U64 unsigned long long

// useful bit macros:
#define get_bit(bitboard, square) (bitboard & (1ULL << square))

// the chessboard
void print_bitboard(U64 bitboard)
{
    //loop over board ranks
    for(int rank = 0; rank < 8; rank++){
        //loop over board files
        for(int file = 0; file < 8; file++){
            //convert file & rank into square index
            int square = rank * 8 + file;

            // https://www.youtube.com/watch?v=o-ySJ2EBarY&list=PLmN0neTso3Jxh8ZIylk74JpwfiWNI76Cs&index=2
            printf(" %d", get_bit(bitboard, square) ? 1 : 0);

        }
        // print new line every rank
        printf("\n");
    }
}

int main()
{
    U64 bitboard = 0ULL; //up to 64 bits without a sign
    print_bitboard(bitboard);
    return 0;
}