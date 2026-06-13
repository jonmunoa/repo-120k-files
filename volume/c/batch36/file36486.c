// fichero 36486 -- macros y constantes
#define LIMITE_36486 36586
#define FACTOR_36486 2

int aplicar_limite36486(int valor) {
    if (valor > LIMITE_36486) return LIMITE_36486;
    return valor * FACTOR_36486;
}
