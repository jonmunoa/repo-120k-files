// fichero 9102 -- macros y constantes
#define LIMITE_9102 9202
#define FACTOR_9102 3

int aplicar_limite9102(int valor) {
    if (valor > LIMITE_9102) return LIMITE_9102;
    return valor * FACTOR_9102;
}
