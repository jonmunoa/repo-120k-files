// fichero 1670 -- macros y constantes -- MODIFICADO
#define LIMITE_1670 1870
#define FACTOR_1670 2

int aplicar_limite1670(int valor) {
    if (valor > LIMITE_1670) return LIMITE_1670;
    return valor * FACTOR_1670;
}
