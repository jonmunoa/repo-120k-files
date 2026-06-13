// fichero 32774 -- macros y constantes
#define LIMITE_32774 32874
#define FACTOR_32774 5

int aplicar_limite32774(int valor) {
    if (valor > LIMITE_32774) return LIMITE_32774;
    return valor * FACTOR_32774;
}
