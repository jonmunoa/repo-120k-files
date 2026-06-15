// fichero 47862 -- macros y constantes -- MODIFICADO
#define LIMITE_47862 48062
#define FACTOR_47862 4

int aplicar_limite47862(int valor) {
    if (valor > LIMITE_47862) return LIMITE_47862;
    return valor * FACTOR_47862;
}
