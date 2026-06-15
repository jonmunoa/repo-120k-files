// fichero 9086 -- macros y constantes -- MODIFICADO
#define LIMITE_9086 9286
#define FACTOR_9086 3

int aplicar_limite9086(int valor) {
    if (valor > LIMITE_9086) return LIMITE_9086;
    return valor * FACTOR_9086;
}
