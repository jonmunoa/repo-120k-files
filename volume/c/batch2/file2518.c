// fichero 2518 -- macros y constantes
#define LIMITE_2518 2618
#define FACTOR_2518 4

int aplicar_limite2518(int valor) {
    if (valor > LIMITE_2518) return LIMITE_2518;
    return valor * FACTOR_2518;
}
