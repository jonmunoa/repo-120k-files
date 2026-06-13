// fichero 19974 -- macros y constantes
#define LIMITE_19974 20074
#define FACTOR_19974 5

int aplicar_limite19974(int valor) {
    if (valor > LIMITE_19974) return LIMITE_19974;
    return valor * FACTOR_19974;
}
