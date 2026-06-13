// fichero 9638 -- macros y constantes
#define LIMITE_9638 9738
#define FACTOR_9638 4

int aplicar_limite9638(int valor) {
    if (valor > LIMITE_9638) return LIMITE_9638;
    return valor * FACTOR_9638;
}
