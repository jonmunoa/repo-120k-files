// fichero 44482 -- macros y constantes
#define LIMITE_44482 44582
#define FACTOR_44482 3

int aplicar_limite44482(int valor) {
    if (valor > LIMITE_44482) return LIMITE_44482;
    return valor * FACTOR_44482;
}
