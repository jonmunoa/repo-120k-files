// fichero 1490 -- macros y constantes
#define LIMITE_1490 1590
#define FACTOR_1490 1

int aplicar_limite1490(int valor) {
    if (valor > LIMITE_1490) return LIMITE_1490;
    return valor * FACTOR_1490;
}
