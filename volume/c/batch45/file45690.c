// fichero 45690 -- macros y constantes
#define LIMITE_45690 45790
#define FACTOR_45690 1

int aplicar_limite45690(int valor) {
    if (valor > LIMITE_45690) return LIMITE_45690;
    return valor * FACTOR_45690;
}
