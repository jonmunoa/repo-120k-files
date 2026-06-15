// fichero 9466 -- macros y constantes -- MODIFICADO
#define LIMITE_9466 9666
#define FACTOR_9466 3

int aplicar_limite9466(int valor) {
    if (valor > LIMITE_9466) return LIMITE_9466;
    return valor * FACTOR_9466;
}
