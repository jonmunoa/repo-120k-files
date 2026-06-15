// fichero 1870 -- macros y constantes -- MODIFICADO
#define LIMITE_1870 2070
#define FACTOR_1870 2

int aplicar_limite1870(int valor) {
    if (valor > LIMITE_1870) return LIMITE_1870;
    return valor * FACTOR_1870;
}
