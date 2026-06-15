// fichero 1910 -- macros y constantes -- MODIFICADO
#define LIMITE_1910 2110
#define FACTOR_1910 2

int aplicar_limite1910(int valor) {
    if (valor > LIMITE_1910) return LIMITE_1910;
    return valor * FACTOR_1910;
}
