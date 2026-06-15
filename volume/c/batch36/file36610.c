// fichero 36610 -- macros y constantes -- MODIFICADO
#define LIMITE_36610 36810
#define FACTOR_36610 2

int aplicar_limite36610(int valor) {
    if (valor > LIMITE_36610) return LIMITE_36610;
    return valor * FACTOR_36610;
}
