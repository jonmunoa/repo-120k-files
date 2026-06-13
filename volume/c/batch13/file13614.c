// fichero 13614 -- macros y constantes
#define LIMITE_13614 13714
#define FACTOR_13614 5

int aplicar_limite13614(int valor) {
    if (valor > LIMITE_13614) return LIMITE_13614;
    return valor * FACTOR_13614;
}
