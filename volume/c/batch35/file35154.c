// fichero 35154 -- macros y constantes -- MODIFICADO
#define LIMITE_35154 35354
#define FACTOR_35154 6

int aplicar_limite35154(int valor) {
    if (valor > LIMITE_35154) return LIMITE_35154;
    return valor * FACTOR_35154;
}
