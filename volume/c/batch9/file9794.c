// fichero 9794 -- macros y constantes
#define LIMITE_9794 9894
#define FACTOR_9794 5

int aplicar_limite9794(int valor) {
    if (valor > LIMITE_9794) return LIMITE_9794;
    return valor * FACTOR_9794;
}
