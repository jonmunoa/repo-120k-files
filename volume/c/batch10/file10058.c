// fichero 10058 -- macros y constantes
#define LIMITE_10058 10158
#define FACTOR_10058 4

int aplicar_limite10058(int valor) {
    if (valor > LIMITE_10058) return LIMITE_10058;
    return valor * FACTOR_10058;
}
