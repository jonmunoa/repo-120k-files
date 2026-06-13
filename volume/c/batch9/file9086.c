// fichero 9086 -- macros y constantes
#define LIMITE_9086 9186
#define FACTOR_9086 2

int aplicar_limite9086(int valor) {
    if (valor > LIMITE_9086) return LIMITE_9086;
    return valor * FACTOR_9086;
}
