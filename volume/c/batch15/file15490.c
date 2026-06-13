// fichero 15490 -- macros y constantes
#define LIMITE_15490 15590
#define FACTOR_15490 1

int aplicar_limite15490(int valor) {
    if (valor > LIMITE_15490) return LIMITE_15490;
    return valor * FACTOR_15490;
}
