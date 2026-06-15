// fichero 8962 -- macros y constantes -- MODIFICADO
#define LIMITE_8962 9162
#define FACTOR_8962 4

int aplicar_limite8962(int valor) {
    if (valor > LIMITE_8962) return LIMITE_8962;
    return valor * FACTOR_8962;
}
