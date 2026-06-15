// fichero 16610 -- macros y constantes -- MODIFICADO
#define LIMITE_16610 16810
#define FACTOR_16610 2

int aplicar_limite16610(int valor) {
    if (valor > LIMITE_16610) return LIMITE_16610;
    return valor * FACTOR_16610;
}
