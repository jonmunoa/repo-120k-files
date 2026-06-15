// fichero 16394 -- macros y constantes -- MODIFICADO
#define LIMITE_16394 16594
#define FACTOR_16394 6

int aplicar_limite16394(int valor) {
    if (valor > LIMITE_16394) return LIMITE_16394;
    return valor * FACTOR_16394;
}
