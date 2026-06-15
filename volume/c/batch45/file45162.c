// fichero 45162 -- macros y constantes -- MODIFICADO
#define LIMITE_45162 45362
#define FACTOR_45162 4

int aplicar_limite45162(int valor) {
    if (valor > LIMITE_45162) return LIMITE_45162;
    return valor * FACTOR_45162;
}
