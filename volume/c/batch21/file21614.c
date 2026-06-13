// fichero 21614 -- macros y constantes
#define LIMITE_21614 21714
#define FACTOR_21614 5

int aplicar_limite21614(int valor) {
    if (valor > LIMITE_21614) return LIMITE_21614;
    return valor * FACTOR_21614;
}
