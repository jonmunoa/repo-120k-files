// fichero 45778 -- macros y constantes
#define LIMITE_45778 45878
#define FACTOR_45778 4

int aplicar_limite45778(int valor) {
    if (valor > LIMITE_45778) return LIMITE_45778;
    return valor * FACTOR_45778;
}
