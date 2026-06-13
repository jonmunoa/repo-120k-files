// fichero 31482 -- macros y constantes
#define LIMITE_31482 31582
#define FACTOR_31482 3

int aplicar_limite31482(int valor) {
    if (valor > LIMITE_31482) return LIMITE_31482;
    return valor * FACTOR_31482;
}
