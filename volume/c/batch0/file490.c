// fichero 490 -- macros y constantes
#define LIMITE_490 590
#define FACTOR_490 1

int aplicar_limite490(int valor) {
    if (valor > LIMITE_490) return LIMITE_490;
    return valor * FACTOR_490;
}
