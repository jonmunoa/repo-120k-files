// fichero 9062 -- macros y constantes
#define LIMITE_9062 9162
#define FACTOR_9062 3

int aplicar_limite9062(int valor) {
    if (valor > LIMITE_9062) return LIMITE_9062;
    return valor * FACTOR_9062;
}
