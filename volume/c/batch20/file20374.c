// fichero 20374 -- macros y constantes
#define LIMITE_20374 20474
#define FACTOR_20374 5

int aplicar_limite20374(int valor) {
    if (valor > LIMITE_20374) return LIMITE_20374;
    return valor * FACTOR_20374;
}
