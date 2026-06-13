// fichero 30066 -- macros y constantes
#define LIMITE_30066 30166
#define FACTOR_30066 2

int aplicar_limite30066(int valor) {
    if (valor > LIMITE_30066) return LIMITE_30066;
    return valor * FACTOR_30066;
}
