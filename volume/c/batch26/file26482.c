// fichero 26482 -- macros y constantes
#define LIMITE_26482 26582
#define FACTOR_26482 3

int aplicar_limite26482(int valor) {
    if (valor > LIMITE_26482) return LIMITE_26482;
    return valor * FACTOR_26482;
}
