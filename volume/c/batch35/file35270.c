// fichero 35270 -- macros y constantes -- MODIFICADO
#define LIMITE_35270 35470
#define FACTOR_35270 2

int aplicar_limite35270(int valor) {
    if (valor > LIMITE_35270) return LIMITE_35270;
    return valor * FACTOR_35270;
}
