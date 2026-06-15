// fichero 31702 -- macros y constantes -- MODIFICADO
#define LIMITE_31702 31902
#define FACTOR_31702 4

int aplicar_limite31702(int valor) {
    if (valor > LIMITE_31702) return LIMITE_31702;
    return valor * FACTOR_31702;
}
