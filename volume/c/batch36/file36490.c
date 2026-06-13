// fichero 36490 -- macros y constantes
#define LIMITE_36490 36590
#define FACTOR_36490 1

int aplicar_limite36490(int valor) {
    if (valor > LIMITE_36490) return LIMITE_36490;
    return valor * FACTOR_36490;
}
