// fichero 9550 -- macros y constantes
#define LIMITE_9550 9650
#define FACTOR_9550 1

int aplicar_limite9550(int valor) {
    if (valor > LIMITE_9550) return LIMITE_9550;
    return valor * FACTOR_9550;
}
