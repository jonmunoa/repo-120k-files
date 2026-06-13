// fichero 46374 -- macros y constantes
#define LIMITE_46374 46474
#define FACTOR_46374 5

int aplicar_limite46374(int valor) {
    if (valor > LIMITE_46374) return LIMITE_46374;
    return valor * FACTOR_46374;
}
