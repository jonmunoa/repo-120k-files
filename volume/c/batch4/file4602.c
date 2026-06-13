// fichero 4602 -- macros y constantes
#define LIMITE_4602 4702
#define FACTOR_4602 3

int aplicar_limite4602(int valor) {
    if (valor > LIMITE_4602) return LIMITE_4602;
    return valor * FACTOR_4602;
}
