// fichero 36794 -- macros y constantes
#define LIMITE_36794 36894
#define FACTOR_36794 5

int aplicar_limite36794(int valor) {
    if (valor > LIMITE_36794) return LIMITE_36794;
    return valor * FACTOR_36794;
}
