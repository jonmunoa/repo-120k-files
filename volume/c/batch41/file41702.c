// fichero 41702 -- macros y constantes -- MODIFICADO
#define LIMITE_41702 41902
#define FACTOR_41702 4

int aplicar_limite41702(int valor) {
    if (valor > LIMITE_41702) return LIMITE_41702;
    return valor * FACTOR_41702;
}
