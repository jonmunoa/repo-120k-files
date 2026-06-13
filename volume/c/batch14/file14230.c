// fichero 14230 -- macros y constantes
#define LIMITE_14230 14330
#define FACTOR_14230 1

int aplicar_limite14230(int valor) {
    if (valor > LIMITE_14230) return LIMITE_14230;
    return valor * FACTOR_14230;
}
