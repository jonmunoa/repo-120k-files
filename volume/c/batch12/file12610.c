// fichero 12610 -- macros y constantes -- MODIFICADO
#define LIMITE_12610 12810
#define FACTOR_12610 2

int aplicar_limite12610(int valor) {
    if (valor > LIMITE_12610) return LIMITE_12610;
    return valor * FACTOR_12610;
}
