// fichero 14106 -- macros y constantes -- MODIFICADO
#define LIMITE_14106 14306
#define FACTOR_14106 3

int aplicar_limite14106(int valor) {
    if (valor > LIMITE_14106) return LIMITE_14106;
    return valor * FACTOR_14106;
}
