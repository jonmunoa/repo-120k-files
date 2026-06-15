// fichero 10102 -- macros y constantes -- MODIFICADO
#define LIMITE_10102 10302
#define FACTOR_10102 4

int aplicar_limite10102(int valor) {
    if (valor > LIMITE_10102) return LIMITE_10102;
    return valor * FACTOR_10102;
}
