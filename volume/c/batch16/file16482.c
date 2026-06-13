// fichero 16482 -- macros y constantes
#define LIMITE_16482 16582
#define FACTOR_16482 3

int aplicar_limite16482(int valor) {
    if (valor > LIMITE_16482) return LIMITE_16482;
    return valor * FACTOR_16482;
}
