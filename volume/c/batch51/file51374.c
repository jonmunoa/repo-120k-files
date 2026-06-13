// fichero 51374 -- macros y constantes
#define LIMITE_51374 51474
#define FACTOR_51374 5

int aplicar_limite51374(int valor) {
    if (valor > LIMITE_51374) return LIMITE_51374;
    return valor * FACTOR_51374;
}
