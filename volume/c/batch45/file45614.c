// fichero 45614 -- macros y constantes
#define LIMITE_45614 45714
#define FACTOR_45614 5

int aplicar_limite45614(int valor) {
    if (valor > LIMITE_45614) return LIMITE_45614;
    return valor * FACTOR_45614;
}
