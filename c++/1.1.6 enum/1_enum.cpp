#include <iostream>
#include <format>

using namespace std;

int main()
{

    enum class PieceType
    {
        King,
        Queen,
        Rook,
        Pawn
    };

    PieceType piece{PieceType::King};

    cout << format("Piece Value: {}\n", static_cast<int>(piece)) << endl; // cast

    return 0;
}