// fichero 9134 -- macros y constantes
#define LIMITE_9134 9234
#define FACTOR_9134 5

int aplicar_limite9134(int valor) {
    if (valor > LIMITE_9134) return LIMITE_9134;
    return valor * FACTOR_9134;
}
