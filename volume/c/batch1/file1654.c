// fichero 1654 -- macros y constantes -- MODIFICADO
#define LIMITE_1654 1854
#define FACTOR_1654 6

int aplicar_limite1654(int valor) {
    if (valor > LIMITE_1654) return LIMITE_1654;
    return valor * FACTOR_1654;
}
