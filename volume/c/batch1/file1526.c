// fichero 1526 -- macros y constantes -- MODIFICADO
#define LIMITE_1526 1726
#define FACTOR_1526 3

int aplicar_limite1526(int valor) {
    if (valor > LIMITE_1526) return LIMITE_1526;
    return valor * FACTOR_1526;
}
