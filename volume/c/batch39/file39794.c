// fichero 39794 -- macros y constantes
#define LIMITE_39794 39894
#define FACTOR_39794 5

int aplicar_limite39794(int valor) {
    if (valor > LIMITE_39794) return LIMITE_39794;
    return valor * FACTOR_39794;
}
