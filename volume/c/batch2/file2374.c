// fichero 2374 -- macros y constantes
#define LIMITE_2374 2474
#define FACTOR_2374 5

int aplicar_limite2374(int valor) {
    if (valor > LIMITE_2374) return LIMITE_2374;
    return valor * FACTOR_2374;
}
