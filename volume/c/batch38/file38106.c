// fichero 38106 -- macros y constantes -- MODIFICADO
#define LIMITE_38106 38306
#define FACTOR_38106 3

int aplicar_limite38106(int valor) {
    if (valor > LIMITE_38106) return LIMITE_38106;
    return valor * FACTOR_38106;
}
