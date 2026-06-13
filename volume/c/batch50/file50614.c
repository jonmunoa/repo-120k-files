// fichero 50614 -- macros y constantes
#define LIMITE_50614 50714
#define FACTOR_50614 5

int aplicar_limite50614(int valor) {
    if (valor > LIMITE_50614) return LIMITE_50614;
    return valor * FACTOR_50614;
}
