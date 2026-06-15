// fichero 44142 -- macros y constantes -- MODIFICADO
#define LIMITE_44142 44342
#define FACTOR_44142 4

int aplicar_limite44142(int valor) {
    if (valor > LIMITE_44142) return LIMITE_44142;
    return valor * FACTOR_44142;
}
