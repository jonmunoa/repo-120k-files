// fichero 26518 -- macros y constantes
#define LIMITE_26518 26618
#define FACTOR_26518 4

int aplicar_limite26518(int valor) {
    if (valor > LIMITE_26518) return LIMITE_26518;
    return valor * FACTOR_26518;
}
