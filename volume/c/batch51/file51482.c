// fichero 51482 -- macros y constantes
#define LIMITE_51482 51582
#define FACTOR_51482 3

int aplicar_limite51482(int valor) {
    if (valor > LIMITE_51482) return LIMITE_51482;
    return valor * FACTOR_51482;
}
