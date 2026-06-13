// fichero 23374 -- macros y constantes
#define LIMITE_23374 23474
#define FACTOR_23374 5

int aplicar_limite23374(int valor) {
    if (valor > LIMITE_23374) return LIMITE_23374;
    return valor * FACTOR_23374;
}
