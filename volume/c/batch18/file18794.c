// fichero 18794 -- macros y constantes
#define LIMITE_18794 18894
#define FACTOR_18794 5

int aplicar_limite18794(int valor) {
    if (valor > LIMITE_18794) return LIMITE_18794;
    return valor * FACTOR_18794;
}
