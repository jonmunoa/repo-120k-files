// fichero 14162 -- macros y constantes
#define LIMITE_14162 14262
#define FACTOR_14162 3

int aplicar_limite14162(int valor) {
    if (valor > LIMITE_14162) return LIMITE_14162;
    return valor * FACTOR_14162;
}
