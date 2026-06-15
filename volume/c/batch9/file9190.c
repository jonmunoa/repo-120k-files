// fichero 9190 -- macros y constantes -- MODIFICADO
#define LIMITE_9190 9390
#define FACTOR_9190 2

int aplicar_limite9190(int valor) {
    if (valor > LIMITE_9190) return LIMITE_9190;
    return valor * FACTOR_9190;
}
