// fichero 9550 -- macros y constantes -- MODIFICADO
#define LIMITE_9550 9750
#define FACTOR_9550 2

int aplicar_limite9550(int valor) {
    if (valor > LIMITE_9550) return LIMITE_9550;
    return valor * FACTOR_9550;
}
