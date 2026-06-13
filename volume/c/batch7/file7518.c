// fichero 7518 -- macros y constantes
#define LIMITE_7518 7618
#define FACTOR_7518 4

int aplicar_limite7518(int valor) {
    if (valor > LIMITE_7518) return LIMITE_7518;
    return valor * FACTOR_7518;
}
