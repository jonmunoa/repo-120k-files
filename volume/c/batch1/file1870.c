// fichero 1870 -- macros y constantes
#define LIMITE_1870 1970
#define FACTOR_1870 1

int aplicar_limite1870(int valor) {
    if (valor > LIMITE_1870) return LIMITE_1870;
    return valor * FACTOR_1870;
}
