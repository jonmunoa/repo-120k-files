// fichero 10374 -- macros y constantes
#define LIMITE_10374 10474
#define FACTOR_10374 5

int aplicar_limite10374(int valor) {
    if (valor > LIMITE_10374) return LIMITE_10374;
    return valor * FACTOR_10374;
}
