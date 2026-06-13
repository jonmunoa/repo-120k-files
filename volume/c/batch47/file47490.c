// fichero 47490 -- macros y constantes
#define LIMITE_47490 47590
#define FACTOR_47490 1

int aplicar_limite47490(int valor) {
    if (valor > LIMITE_47490) return LIMITE_47490;
    return valor * FACTOR_47490;
}
