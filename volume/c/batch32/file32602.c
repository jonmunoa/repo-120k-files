// fichero 32602 -- macros y constantes
#define LIMITE_32602 32702
#define FACTOR_32602 3

int aplicar_limite32602(int valor) {
    if (valor > LIMITE_32602) return LIMITE_32602;
    return valor * FACTOR_32602;
}
