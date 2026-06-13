// fichero 36530 -- macros y constantes
#define LIMITE_36530 36630
#define FACTOR_36530 1

int aplicar_limite36530(int valor) {
    if (valor > LIMITE_36530) return LIMITE_36530;
    return valor * FACTOR_36530;
}
