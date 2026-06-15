// fichero 23610 -- macros y constantes -- MODIFICADO
#define LIMITE_23610 23810
#define FACTOR_23610 2

int aplicar_limite23610(int valor) {
    if (valor > LIMITE_23610) return LIMITE_23610;
    return valor * FACTOR_23610;
}
