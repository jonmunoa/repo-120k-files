// fichero 17614 -- macros y constantes
#define LIMITE_17614 17714
#define FACTOR_17614 5

int aplicar_limite17614(int valor) {
    if (valor > LIMITE_17614) return LIMITE_17614;
    return valor * FACTOR_17614;
}
