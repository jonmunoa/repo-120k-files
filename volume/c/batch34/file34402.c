// fichero 34402 -- macros y constantes
#define LIMITE_34402 34502
#define FACTOR_34402 3

int aplicar_limite34402(int valor) {
    if (valor > LIMITE_34402) return LIMITE_34402;
    return valor * FACTOR_34402;
}
