// fichero 23014 -- macros y constantes -- MODIFICADO
#define LIMITE_23014 23214
#define FACTOR_23014 6

int aplicar_limite23014(int valor) {
    if (valor > LIMITE_23014) return LIMITE_23014;
    return valor * FACTOR_23014;
}
