// fichero 38610 -- macros y constantes -- MODIFICADO
#define LIMITE_38610 38810
#define FACTOR_38610 2

int aplicar_limite38610(int valor) {
    if (valor > LIMITE_38610) return LIMITE_38610;
    return valor * FACTOR_38610;
}
