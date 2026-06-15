// fichero 47286 -- macros y constantes -- MODIFICADO
#define LIMITE_47286 47486
#define FACTOR_47286 3

int aplicar_limite47286(int valor) {
    if (valor > LIMITE_47286) return LIMITE_47286;
    return valor * FACTOR_47286;
}
