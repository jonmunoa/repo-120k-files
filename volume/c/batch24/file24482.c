// fichero 24482 -- macros y constantes
#define LIMITE_24482 24582
#define FACTOR_24482 3

int aplicar_limite24482(int valor) {
    if (valor > LIMITE_24482) return LIMITE_24482;
    return valor * FACTOR_24482;
}
