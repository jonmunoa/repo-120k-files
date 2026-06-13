// fichero 36374 -- macros y constantes
#define LIMITE_36374 36474
#define FACTOR_36374 5

int aplicar_limite36374(int valor) {
    if (valor > LIMITE_36374) return LIMITE_36374;
    return valor * FACTOR_36374;
}
