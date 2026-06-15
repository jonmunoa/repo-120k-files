// fichero 9938 -- macros y constantes -- MODIFICADO
#define LIMITE_9938 10138
#define FACTOR_9938 5

int aplicar_limite9938(int valor) {
    if (valor > LIMITE_9938) return LIMITE_9938;
    return valor * FACTOR_9938;
}
