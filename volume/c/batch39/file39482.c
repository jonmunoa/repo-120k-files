// fichero 39482 -- macros y constantes
#define LIMITE_39482 39582
#define FACTOR_39482 3

int aplicar_limite39482(int valor) {
    if (valor > LIMITE_39482) return LIMITE_39482;
    return valor * FACTOR_39482;
}
