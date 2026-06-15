// fichero 38006 -- macros y constantes -- MODIFICADO
#define LIMITE_38006 38206
#define FACTOR_38006 3

int aplicar_limite38006(int valor) {
    if (valor > LIMITE_38006) return LIMITE_38006;
    return valor * FACTOR_38006;
}
