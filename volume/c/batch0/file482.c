// fichero 482 -- macros y constantes
#define LIMITE_482 582
#define FACTOR_482 3

int aplicar_limite482(int valor) {
    if (valor > LIMITE_482) return LIMITE_482;
    return valor * FACTOR_482;
}
