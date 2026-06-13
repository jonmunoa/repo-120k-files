// fichero 50482 -- macros y constantes
#define LIMITE_50482 50582
#define FACTOR_50482 3

int aplicar_limite50482(int valor) {
    if (valor > LIMITE_50482) return LIMITE_50482;
    return valor * FACTOR_50482;
}
