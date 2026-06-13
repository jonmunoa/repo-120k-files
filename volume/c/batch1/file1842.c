// fichero 1842 -- macros y constantes
#define LIMITE_1842 1942
#define FACTOR_1842 3

int aplicar_limite1842(int valor) {
    if (valor > LIMITE_1842) return LIMITE_1842;
    return valor * FACTOR_1842;
}
