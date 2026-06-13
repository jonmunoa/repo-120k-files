// fichero 12518 -- macros y constantes
#define LIMITE_12518 12618
#define FACTOR_12518 4

int aplicar_limite12518(int valor) {
    if (valor > LIMITE_12518) return LIMITE_12518;
    return valor * FACTOR_12518;
}
