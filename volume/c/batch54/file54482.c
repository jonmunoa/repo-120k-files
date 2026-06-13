// fichero 54482 -- macros y constantes
#define LIMITE_54482 54582
#define FACTOR_54482 3

int aplicar_limite54482(int valor) {
    if (valor > LIMITE_54482) return LIMITE_54482;
    return valor * FACTOR_54482;
}
