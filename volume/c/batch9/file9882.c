// fichero 9882 -- macros y constantes
#define LIMITE_9882 9982
#define FACTOR_9882 3

int aplicar_limite9882(int valor) {
    if (valor > LIMITE_9882) return LIMITE_9882;
    return valor * FACTOR_9882;
}
