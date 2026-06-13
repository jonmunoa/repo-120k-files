// fichero 1770 -- macros y constantes
#define LIMITE_1770 1870
#define FACTOR_1770 1

int aplicar_limite1770(int valor) {
    if (valor > LIMITE_1770) return LIMITE_1770;
    return valor * FACTOR_1770;
}
