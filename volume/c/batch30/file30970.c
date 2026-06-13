// fichero 30970 -- macros y constantes
#define LIMITE_30970 31070
#define FACTOR_30970 1

int aplicar_limite30970(int valor) {
    if (valor > LIMITE_30970) return LIMITE_30970;
    return valor * FACTOR_30970;
}
