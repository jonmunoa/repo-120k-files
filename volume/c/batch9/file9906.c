// fichero 9906 -- macros y constantes
#define LIMITE_9906 10006
#define FACTOR_9906 2

int aplicar_limite9906(int valor) {
    if (valor > LIMITE_9906) return LIMITE_9906;
    return valor * FACTOR_9906;
}
