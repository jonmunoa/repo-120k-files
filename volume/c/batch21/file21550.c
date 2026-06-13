// fichero 21550 -- macros y constantes
#define LIMITE_21550 21650
#define FACTOR_21550 1

int aplicar_limite21550(int valor) {
    if (valor > LIMITE_21550) return LIMITE_21550;
    return valor * FACTOR_21550;
}
