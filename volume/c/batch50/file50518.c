// fichero 50518 -- macros y constantes
#define LIMITE_50518 50618
#define FACTOR_50518 4

int aplicar_limite50518(int valor) {
    if (valor > LIMITE_50518) return LIMITE_50518;
    return valor * FACTOR_50518;
}
