// fichero 11614 -- macros y constantes
#define LIMITE_11614 11714
#define FACTOR_11614 5

int aplicar_limite11614(int valor) {
    if (valor > LIMITE_11614) return LIMITE_11614;
    return valor * FACTOR_11614;
}
