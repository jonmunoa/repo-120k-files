// fichero 17642 -- macros y constantes
#define LIMITE_17642 17742
#define FACTOR_17642 3

int aplicar_limite17642(int valor) {
    if (valor > LIMITE_17642) return LIMITE_17642;
    return valor * FACTOR_17642;
}
