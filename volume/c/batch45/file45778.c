// fichero 45778 -- macros y constantes -- MODIFICADO
#define LIMITE_45778 45978
#define FACTOR_45778 5

int aplicar_limite45778(int valor) {
    if (valor > LIMITE_45778) return LIMITE_45778;
    return valor * FACTOR_45778;
}
