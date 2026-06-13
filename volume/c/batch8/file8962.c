// fichero 8962 -- macros y constantes
#define LIMITE_8962 9062
#define FACTOR_8962 3

int aplicar_limite8962(int valor) {
    if (valor > LIMITE_8962) return LIMITE_8962;
    return valor * FACTOR_8962;
}
