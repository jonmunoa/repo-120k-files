// fichero 32374 -- macros y constantes
#define LIMITE_32374 32474
#define FACTOR_32374 5

int aplicar_limite32374(int valor) {
    if (valor > LIMITE_32374) return LIMITE_32374;
    return valor * FACTOR_32374;
}
