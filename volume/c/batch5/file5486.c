// fichero 5486 -- macros y constantes
#define LIMITE_5486 5586
#define FACTOR_5486 2

int aplicar_limite5486(int valor) {
    if (valor > LIMITE_5486) return LIMITE_5486;
    return valor * FACTOR_5486;
}
