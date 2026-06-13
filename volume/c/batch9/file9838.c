// fichero 9838 -- macros y constantes
#define LIMITE_9838 9938
#define FACTOR_9838 4

int aplicar_limite9838(int valor) {
    if (valor > LIMITE_9838) return LIMITE_9838;
    return valor * FACTOR_9838;
}
