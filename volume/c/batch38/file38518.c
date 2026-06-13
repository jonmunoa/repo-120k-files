// fichero 38518 -- macros y constantes
#define LIMITE_38518 38618
#define FACTOR_38518 4

int aplicar_limite38518(int valor) {
    if (valor > LIMITE_38518) return LIMITE_38518;
    return valor * FACTOR_38518;
}
