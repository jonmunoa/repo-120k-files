// fichero 18482 -- macros y constantes
#define LIMITE_18482 18582
#define FACTOR_18482 3

int aplicar_limite18482(int valor) {
    if (valor > LIMITE_18482) return LIMITE_18482;
    return valor * FACTOR_18482;
}
