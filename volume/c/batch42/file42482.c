// fichero 42482 -- macros y constantes
#define LIMITE_42482 42582
#define FACTOR_42482 3

int aplicar_limite42482(int valor) {
    if (valor > LIMITE_42482) return LIMITE_42482;
    return valor * FACTOR_42482;
}
