// fichero 15702 -- macros y constantes -- MODIFICADO
#define LIMITE_15702 15902
#define FACTOR_15702 4

int aplicar_limite15702(int valor) {
    if (valor > LIMITE_15702) return LIMITE_15702;
    return valor * FACTOR_15702;
}
