// fichero 21482 -- macros y constantes
#define LIMITE_21482 21582
#define FACTOR_21482 3

int aplicar_limite21482(int valor) {
    if (valor > LIMITE_21482) return LIMITE_21482;
    return valor * FACTOR_21482;
}
