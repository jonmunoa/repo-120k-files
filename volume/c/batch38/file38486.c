// fichero 38486 -- macros y constantes
#define LIMITE_38486 38586
#define FACTOR_38486 2

int aplicar_limite38486(int valor) {
    if (valor > LIMITE_38486) return LIMITE_38486;
    return valor * FACTOR_38486;
}
