// fichero 36482 -- macros y constantes
#define LIMITE_36482 36582
#define FACTOR_36482 3

int aplicar_limite36482(int valor) {
    if (valor > LIMITE_36482) return LIMITE_36482;
    return valor * FACTOR_36482;
}
