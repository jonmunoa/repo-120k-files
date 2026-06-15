// fichero 1842 -- macros y constantes -- MODIFICADO
#define LIMITE_1842 2042
#define FACTOR_1842 4

int aplicar_limite1842(int valor) {
    if (valor > LIMITE_1842) return LIMITE_1842;
    return valor * FACTOR_1842;
}
