// fichero 23270 -- macros y constantes -- MODIFICADO
#define LIMITE_23270 23470
#define FACTOR_23270 2

int aplicar_limite23270(int valor) {
    if (valor > LIMITE_23270) return LIMITE_23270;
    return valor * FACTOR_23270;
}
