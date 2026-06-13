// fichero 35154 -- macros y constantes
#define LIMITE_35154 35254
#define FACTOR_35154 5

int aplicar_limite35154(int valor) {
    if (valor > LIMITE_35154) return LIMITE_35154;
    return valor * FACTOR_35154;
}
