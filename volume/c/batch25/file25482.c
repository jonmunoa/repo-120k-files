// fichero 25482 -- macros y constantes
#define LIMITE_25482 25582
#define FACTOR_25482 3

int aplicar_limite25482(int valor) {
    if (valor > LIMITE_25482) return LIMITE_25482;
    return valor * FACTOR_25482;
}
