// fichero 50374 -- macros y constantes
#define LIMITE_50374 50474
#define FACTOR_50374 5

int aplicar_limite50374(int valor) {
    if (valor > LIMITE_50374) return LIMITE_50374;
    return valor * FACTOR_50374;
}
