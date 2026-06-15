// fichero 1490 -- macros y constantes -- MODIFICADO
#define LIMITE_1490 1690
#define FACTOR_1490 2

int aplicar_limite1490(int valor) {
    if (valor > LIMITE_1490) return LIMITE_1490;
    return valor * FACTOR_1490;
}
