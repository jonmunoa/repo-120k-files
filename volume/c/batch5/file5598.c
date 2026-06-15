// fichero 5598 -- macros y constantes -- MODIFICADO
#define LIMITE_5598 5798
#define FACTOR_5598 5

int aplicar_limite5598(int valor) {
    if (valor > LIMITE_5598) return LIMITE_5598;
    return valor * FACTOR_5598;
}
