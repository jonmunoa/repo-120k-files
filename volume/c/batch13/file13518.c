// fichero 13518 -- macros y constantes
#define LIMITE_13518 13618
#define FACTOR_13518 4

int aplicar_limite13518(int valor) {
    if (valor > LIMITE_13518) return LIMITE_13518;
    return valor * FACTOR_13518;
}
