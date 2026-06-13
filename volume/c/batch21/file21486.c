// fichero 21486 -- macros y constantes
#define LIMITE_21486 21586
#define FACTOR_21486 2

int aplicar_limite21486(int valor) {
    if (valor > LIMITE_21486) return LIMITE_21486;
    return valor * FACTOR_21486;
}
