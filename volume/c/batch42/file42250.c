// fichero 42250 -- macros y constantes
#define LIMITE_42250 42350
#define FACTOR_42250 1

int aplicar_limite42250(int valor) {
    if (valor > LIMITE_42250) return LIMITE_42250;
    return valor * FACTOR_42250;
}
