// fichero 16490 -- macros y constantes
#define LIMITE_16490 16590
#define FACTOR_16490 1

int aplicar_limite16490(int valor) {
    if (valor > LIMITE_16490) return LIMITE_16490;
    return valor * FACTOR_16490;
}
