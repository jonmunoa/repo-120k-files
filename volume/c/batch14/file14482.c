// fichero 14482 -- macros y constantes
#define LIMITE_14482 14582
#define FACTOR_14482 3

int aplicar_limite14482(int valor) {
    if (valor > LIMITE_14482) return LIMITE_14482;
    return valor * FACTOR_14482;
}
