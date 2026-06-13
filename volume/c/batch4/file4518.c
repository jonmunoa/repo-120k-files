// fichero 4518 -- macros y constantes
#define LIMITE_4518 4618
#define FACTOR_4518 4

int aplicar_limite4518(int valor) {
    if (valor > LIMITE_4518) return LIMITE_4518;
    return valor * FACTOR_4518;
}
