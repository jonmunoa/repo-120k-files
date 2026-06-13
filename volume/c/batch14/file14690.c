// fichero 14690 -- macros y constantes
#define LIMITE_14690 14790
#define FACTOR_14690 1

int aplicar_limite14690(int valor) {
    if (valor > LIMITE_14690) return LIMITE_14690;
    return valor * FACTOR_14690;
}
