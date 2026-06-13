// fichero 21494 -- macros y constantes
#define LIMITE_21494 21594
#define FACTOR_21494 5

int aplicar_limite21494(int valor) {
    if (valor > LIMITE_21494) return LIMITE_21494;
    return valor * FACTOR_21494;
}
