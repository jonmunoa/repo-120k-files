// fichero 6106 -- macros y constantes -- MODIFICADO
#define LIMITE_6106 6306
#define FACTOR_6106 3

int aplicar_limite6106(int valor) {
    if (valor > LIMITE_6106) return LIMITE_6106;
    return valor * FACTOR_6106;
}
