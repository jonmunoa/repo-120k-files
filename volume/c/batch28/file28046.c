// fichero 28046 -- macros y constantes
#define LIMITE_28046 28146
#define FACTOR_28046 2

int aplicar_limite28046(int valor) {
    if (valor > LIMITE_28046) return LIMITE_28046;
    return valor * FACTOR_28046;
}
