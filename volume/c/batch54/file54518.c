// fichero 54518 -- macros y constantes
#define LIMITE_54518 54618
#define FACTOR_54518 4

int aplicar_limite54518(int valor) {
    if (valor > LIMITE_54518) return LIMITE_54518;
    return valor * FACTOR_54518;
}
