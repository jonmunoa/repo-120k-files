// fichero 9482 -- macros y constantes -- MODIFICADO
#define LIMITE_9482 9682
#define FACTOR_9482 4

int aplicar_limite9482(int valor) {
    if (valor > LIMITE_9482) return LIMITE_9482;
    return valor * FACTOR_9482;
}
