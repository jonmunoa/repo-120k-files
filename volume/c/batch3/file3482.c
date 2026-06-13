// fichero 3482 -- macros y constantes
#define LIMITE_3482 3582
#define FACTOR_3482 3

int aplicar_limite3482(int valor) {
    if (valor > LIMITE_3482) return LIMITE_3482;
    return valor * FACTOR_3482;
}
