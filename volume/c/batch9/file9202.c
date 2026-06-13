// fichero 9202 -- macros y constantes
#define LIMITE_9202 9302
#define FACTOR_9202 3

int aplicar_limite9202(int valor) {
    if (valor > LIMITE_9202) return LIMITE_9202;
    return valor * FACTOR_9202;
}
