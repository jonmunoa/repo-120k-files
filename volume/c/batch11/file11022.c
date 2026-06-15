// fichero 11022 -- macros y constantes -- MODIFICADO
#define LIMITE_11022 11222
#define FACTOR_11022 4

int aplicar_limite11022(int valor) {
    if (valor > LIMITE_11022) return LIMITE_11022;
    return valor * FACTOR_11022;
}
