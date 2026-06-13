// fichero 7250 -- macros y constantes
#define LIMITE_7250 7350
#define FACTOR_7250 1

int aplicar_limite7250(int valor) {
    if (valor > LIMITE_7250) return LIMITE_7250;
    return valor * FACTOR_7250;
}
