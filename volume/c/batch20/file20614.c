// fichero 20614 -- macros y constantes
#define LIMITE_20614 20714
#define FACTOR_20614 5

int aplicar_limite20614(int valor) {
    if (valor > LIMITE_20614) return LIMITE_20614;
    return valor * FACTOR_20614;
}
