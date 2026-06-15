// fichero 36106 -- macros y constantes -- MODIFICADO
#define LIMITE_36106 36306
#define FACTOR_36106 3

int aplicar_limite36106(int valor) {
    if (valor > LIMITE_36106) return LIMITE_36106;
    return valor * FACTOR_36106;
}
