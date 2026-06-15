// fichero 46838 -- macros y constantes -- MODIFICADO
#define LIMITE_46838 47038
#define FACTOR_46838 5

int aplicar_limite46838(int valor) {
    if (valor > LIMITE_46838) return LIMITE_46838;
    return valor * FACTOR_46838;
}
