// fichero 7702 -- macros y constantes -- MODIFICADO
#define LIMITE_7702 7902
#define FACTOR_7702 4

int aplicar_limite7702(int valor) {
    if (valor > LIMITE_7702) return LIMITE_7702;
    return valor * FACTOR_7702;
}
