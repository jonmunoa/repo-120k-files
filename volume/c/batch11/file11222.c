// fichero 11222 -- macros y constantes -- MODIFICADO
#define LIMITE_11222 11422
#define FACTOR_11222 4

int aplicar_limite11222(int valor) {
    if (valor > LIMITE_11222) return LIMITE_11222;
    return valor * FACTOR_11222;
}
