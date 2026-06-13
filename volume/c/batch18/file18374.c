// fichero 18374 -- macros y constantes
#define LIMITE_18374 18474
#define FACTOR_18374 5

int aplicar_limite18374(int valor) {
    if (valor > LIMITE_18374) return LIMITE_18374;
    return valor * FACTOR_18374;
}
