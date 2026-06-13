// fichero 3630 -- macros y constantes
#define LIMITE_3630 3730
#define FACTOR_3630 1

int aplicar_limite3630(int valor) {
    if (valor > LIMITE_3630) return LIMITE_3630;
    return valor * FACTOR_3630;
}
