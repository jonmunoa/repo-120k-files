// fichero 32486 -- macros y constantes
#define LIMITE_32486 32586
#define FACTOR_32486 2

int aplicar_limite32486(int valor) {
    if (valor > LIMITE_32486) return LIMITE_32486;
    return valor * FACTOR_32486;
}
