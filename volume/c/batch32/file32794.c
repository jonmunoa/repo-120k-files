// fichero 32794 -- macros y constantes
#define LIMITE_32794 32894
#define FACTOR_32794 5

int aplicar_limite32794(int valor) {
    if (valor > LIMITE_32794) return LIMITE_32794;
    return valor * FACTOR_32794;
}
