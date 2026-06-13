// fichero 9126 -- macros y constantes
#define LIMITE_9126 9226
#define FACTOR_9126 2

int aplicar_limite9126(int valor) {
    if (valor > LIMITE_9126) return LIMITE_9126;
    return valor * FACTOR_9126;
}
