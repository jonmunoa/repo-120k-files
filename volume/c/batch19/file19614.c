// fichero 19614 -- macros y constantes
#define LIMITE_19614 19714
#define FACTOR_19614 5

int aplicar_limite19614(int valor) {
    if (valor > LIMITE_19614) return LIMITE_19614;
    return valor * FACTOR_19614;
}
