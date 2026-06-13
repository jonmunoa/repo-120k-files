// fichero 21490 -- macros y constantes
#define LIMITE_21490 21590
#define FACTOR_21490 1

int aplicar_limite21490(int valor) {
    if (valor > LIMITE_21490) return LIMITE_21490;
    return valor * FACTOR_21490;
}
