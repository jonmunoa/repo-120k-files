// fichero 16486 -- macros y constantes
#define LIMITE_16486 16586
#define FACTOR_16486 2

int aplicar_limite16486(int valor) {
    if (valor > LIMITE_16486) return LIMITE_16486;
    return valor * FACTOR_16486;
}
