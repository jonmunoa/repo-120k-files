// fichero 16794 -- macros y constantes
#define LIMITE_16794 16894
#define FACTOR_16794 5

int aplicar_limite16794(int valor) {
    if (valor > LIMITE_16794) return LIMITE_16794;
    return valor * FACTOR_16794;
}
