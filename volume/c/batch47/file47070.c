// fichero 47070 -- macros y constantes -- MODIFICADO
#define LIMITE_47070 47270
#define FACTOR_47070 2

int aplicar_limite47070(int valor) {
    if (valor > LIMITE_47070) return LIMITE_47070;
    return valor * FACTOR_47070;
}
