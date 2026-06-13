// fichero 26374 -- macros y constantes
#define LIMITE_26374 26474
#define FACTOR_26374 5

int aplicar_limite26374(int valor) {
    if (valor > LIMITE_26374) return LIMITE_26374;
    return valor * FACTOR_26374;
}
