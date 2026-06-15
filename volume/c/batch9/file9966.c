// fichero 9966 -- macros y constantes -- MODIFICADO
#define LIMITE_9966 10166
#define FACTOR_9966 3

int aplicar_limite9966(int valor) {
    if (valor > LIMITE_9966) return LIMITE_9966;
    return valor * FACTOR_9966;
}
