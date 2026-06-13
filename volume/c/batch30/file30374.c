// fichero 30374 -- macros y constantes
#define LIMITE_30374 30474
#define FACTOR_30374 5

int aplicar_limite30374(int valor) {
    if (valor > LIMITE_30374) return LIMITE_30374;
    return valor * FACTOR_30374;
}
