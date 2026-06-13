// fichero 18518 -- macros y constantes
#define LIMITE_18518 18618
#define FACTOR_18518 4

int aplicar_limite18518(int valor) {
    if (valor > LIMITE_18518) return LIMITE_18518;
    return valor * FACTOR_18518;
}
