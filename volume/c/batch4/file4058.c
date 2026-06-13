// fichero 4058 -- macros y constantes
#define LIMITE_4058 4158
#define FACTOR_4058 4

int aplicar_limite4058(int valor) {
    if (valor > LIMITE_4058) return LIMITE_4058;
    return valor * FACTOR_4058;
}
