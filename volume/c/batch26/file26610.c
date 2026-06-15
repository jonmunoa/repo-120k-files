// fichero 26610 -- macros y constantes -- MODIFICADO
#define LIMITE_26610 26810
#define FACTOR_26610 2

int aplicar_limite26610(int valor) {
    if (valor > LIMITE_26610) return LIMITE_26610;
    return valor * FACTOR_26610;
}
