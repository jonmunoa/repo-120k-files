// fichero 36518 -- macros y constantes
#define LIMITE_36518 36618
#define FACTOR_36518 4

int aplicar_limite36518(int valor) {
    if (valor > LIMITE_36518) return LIMITE_36518;
    return valor * FACTOR_36518;
}
