// fichero 9774 -- macros y constantes
#define LIMITE_9774 9874
#define FACTOR_9774 5

int aplicar_limite9774(int valor) {
    if (valor > LIMITE_9774) return LIMITE_9774;
    return valor * FACTOR_9774;
}
