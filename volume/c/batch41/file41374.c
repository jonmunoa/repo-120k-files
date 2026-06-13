// fichero 41374 -- macros y constantes
#define LIMITE_41374 41474
#define FACTOR_41374 5

int aplicar_limite41374(int valor) {
    if (valor > LIMITE_41374) return LIMITE_41374;
    return valor * FACTOR_41374;
}
