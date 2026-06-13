// fichero 35482 -- macros y constantes
#define LIMITE_35482 35582
#define FACTOR_35482 3

int aplicar_limite35482(int valor) {
    if (valor > LIMITE_35482) return LIMITE_35482;
    return valor * FACTOR_35482;
}
