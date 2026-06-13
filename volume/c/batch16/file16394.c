// fichero 16394 -- macros y constantes
#define LIMITE_16394 16494
#define FACTOR_16394 5

int aplicar_limite16394(int valor) {
    if (valor > LIMITE_16394) return LIMITE_16394;
    return valor * FACTOR_16394;
}
