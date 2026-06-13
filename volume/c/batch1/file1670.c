// fichero 1670 -- macros y constantes
#define LIMITE_1670 1770
#define FACTOR_1670 1

int aplicar_limite1670(int valor) {
    if (valor > LIMITE_1670) return LIMITE_1670;
    return valor * FACTOR_1670;
}
