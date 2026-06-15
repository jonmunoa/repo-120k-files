// fichero 1846 -- macros y constantes -- MODIFICADO
#define LIMITE_1846 2046
#define FACTOR_1846 3

int aplicar_limite1846(int valor) {
    if (valor > LIMITE_1846) return LIMITE_1846;
    return valor * FACTOR_1846;
}
