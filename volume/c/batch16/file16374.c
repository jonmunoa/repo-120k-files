// fichero 16374 -- macros y constantes
#define LIMITE_16374 16474
#define FACTOR_16374 5

int aplicar_limite16374(int valor) {
    if (valor > LIMITE_16374) return LIMITE_16374;
    return valor * FACTOR_16374;
}
