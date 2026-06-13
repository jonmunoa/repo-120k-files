// fichero 28374 -- macros y constantes
#define LIMITE_28374 28474
#define FACTOR_28374 5

int aplicar_limite28374(int valor) {
    if (valor > LIMITE_28374) return LIMITE_28374;
    return valor * FACTOR_28374;
}
