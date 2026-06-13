// fichero 2510 -- macros y constantes
#define LIMITE_2510 2610
#define FACTOR_2510 1

int aplicar_limite2510(int valor) {
    if (valor > LIMITE_2510) return LIMITE_2510;
    return valor * FACTOR_2510;
}
