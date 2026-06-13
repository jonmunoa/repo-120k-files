// fichero 6510 -- macros y constantes
#define LIMITE_6510 6610
#define FACTOR_6510 1

int aplicar_limite6510(int valor) {
    if (valor > LIMITE_6510) return LIMITE_6510;
    return valor * FACTOR_6510;
}
