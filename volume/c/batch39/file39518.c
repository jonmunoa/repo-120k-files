// fichero 39518 -- macros y constantes
#define LIMITE_39518 39618
#define FACTOR_39518 4

int aplicar_limite39518(int valor) {
    if (valor > LIMITE_39518) return LIMITE_39518;
    return valor * FACTOR_39518;
}
