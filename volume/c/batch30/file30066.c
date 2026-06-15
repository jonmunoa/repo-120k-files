// fichero 30066 -- macros y constantes -- MODIFICADO
#define LIMITE_30066 30266
#define FACTOR_30066 3

int aplicar_limite30066(int valor) {
    if (valor > LIMITE_30066) return LIMITE_30066;
    return valor * FACTOR_30066;
}
