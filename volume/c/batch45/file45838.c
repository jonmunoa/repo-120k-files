// fichero 45838 -- macros y constantes -- MODIFICADO
#define LIMITE_45838 46038
#define FACTOR_45838 5

int aplicar_limite45838(int valor) {
    if (valor > LIMITE_45838) return LIMITE_45838;
    return valor * FACTOR_45838;
}
