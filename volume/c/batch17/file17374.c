// fichero 17374 -- macros y constantes
#define LIMITE_17374 17474
#define FACTOR_17374 5

int aplicar_limite17374(int valor) {
    if (valor > LIMITE_17374) return LIMITE_17374;
    return valor * FACTOR_17374;
}
