// fichero 47702 -- macros y constantes -- MODIFICADO
#define LIMITE_47702 47902
#define FACTOR_47702 4

int aplicar_limite47702(int valor) {
    if (valor > LIMITE_47702) return LIMITE_47702;
    return valor * FACTOR_47702;
}
