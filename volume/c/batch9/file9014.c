// fichero 9014 -- macros y constantes
#define LIMITE_9014 9114
#define FACTOR_9014 5

int aplicar_limite9014(int valor) {
    if (valor > LIMITE_9014) return LIMITE_9014;
    return valor * FACTOR_9014;
}
