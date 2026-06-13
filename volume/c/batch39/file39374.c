// fichero 39374 -- macros y constantes
#define LIMITE_39374 39474
#define FACTOR_39374 5

int aplicar_limite39374(int valor) {
    if (valor > LIMITE_39374) return LIMITE_39374;
    return valor * FACTOR_39374;
}
