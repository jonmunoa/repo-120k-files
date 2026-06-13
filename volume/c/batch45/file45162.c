// fichero 45162 -- macros y constantes
#define LIMITE_45162 45262
#define FACTOR_45162 3

int aplicar_limite45162(int valor) {
    if (valor > LIMITE_45162) return LIMITE_45162;
    return valor * FACTOR_45162;
}
