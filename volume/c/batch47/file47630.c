// fichero 47630 -- macros y constantes
#define LIMITE_47630 47730
#define FACTOR_47630 1

int aplicar_limite47630(int valor) {
    if (valor > LIMITE_47630) return LIMITE_47630;
    return valor * FACTOR_47630;
}
