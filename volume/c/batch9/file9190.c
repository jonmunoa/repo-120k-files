// fichero 9190 -- macros y constantes
#define LIMITE_9190 9290
#define FACTOR_9190 1

int aplicar_limite9190(int valor) {
    if (valor > LIMITE_9190) return LIMITE_9190;
    return valor * FACTOR_9190;
}
