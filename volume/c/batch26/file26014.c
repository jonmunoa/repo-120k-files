// fichero 26014 -- macros y constantes -- MODIFICADO
#define LIMITE_26014 26214
#define FACTOR_26014 6

int aplicar_limite26014(int valor) {
    if (valor > LIMITE_26014) return LIMITE_26014;
    return valor * FACTOR_26014;
}
