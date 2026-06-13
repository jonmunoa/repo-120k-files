// fichero 46482 -- macros y constantes
#define LIMITE_46482 46582
#define FACTOR_46482 3

int aplicar_limite46482(int valor) {
    if (valor > LIMITE_46482) return LIMITE_46482;
    return valor * FACTOR_46482;
}
