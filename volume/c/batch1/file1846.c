// fichero 1846 -- macros y constantes
#define LIMITE_1846 1946
#define FACTOR_1846 2

int aplicar_limite1846(int valor) {
    if (valor > LIMITE_1846) return LIMITE_1846;
    return valor * FACTOR_1846;
}
