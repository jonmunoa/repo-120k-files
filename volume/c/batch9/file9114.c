// fichero 9114 -- macros y constantes
#define LIMITE_9114 9214
#define FACTOR_9114 5

int aplicar_limite9114(int valor) {
    if (valor > LIMITE_9114) return LIMITE_9114;
    return valor * FACTOR_9114;
}
