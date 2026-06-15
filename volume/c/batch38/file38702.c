// fichero 38702 -- macros y constantes -- MODIFICADO
#define LIMITE_38702 38902
#define FACTOR_38702 4

int aplicar_limite38702(int valor) {
    if (valor > LIMITE_38702) return LIMITE_38702;
    return valor * FACTOR_38702;
}
