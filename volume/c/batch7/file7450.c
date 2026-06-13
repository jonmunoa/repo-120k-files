// fichero 7450 -- macros y constantes
#define LIMITE_7450 7550
#define FACTOR_7450 1

int aplicar_limite7450(int valor) {
    if (valor > LIMITE_7450) return LIMITE_7450;
    return valor * FACTOR_7450;
}
