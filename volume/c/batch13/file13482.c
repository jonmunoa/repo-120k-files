// fichero 13482 -- macros y constantes
#define LIMITE_13482 13582
#define FACTOR_13482 3

int aplicar_limite13482(int valor) {
    if (valor > LIMITE_13482) return LIMITE_13482;
    return valor * FACTOR_13482;
}
