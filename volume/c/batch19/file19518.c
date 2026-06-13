// fichero 19518 -- macros y constantes
#define LIMITE_19518 19618
#define FACTOR_19518 4

int aplicar_limite19518(int valor) {
    if (valor > LIMITE_19518) return LIMITE_19518;
    return valor * FACTOR_19518;
}
