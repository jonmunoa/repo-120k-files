// fichero 1678 -- macros y constantes -- MODIFICADO
#define LIMITE_1678 1878
#define FACTOR_1678 5

int aplicar_limite1678(int valor) {
    if (valor > LIMITE_1678) return LIMITE_1678;
    return valor * FACTOR_1678;
}
