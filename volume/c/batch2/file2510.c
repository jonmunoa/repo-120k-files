// fichero 2510 -- macros y constantes -- MODIFICADO
#define LIMITE_2510 2710
#define FACTOR_2510 2

int aplicar_limite2510(int valor) {
    if (valor > LIMITE_2510) return LIMITE_2510;
    return valor * FACTOR_2510;
}
