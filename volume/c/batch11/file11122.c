// fichero 11122 -- macros y constantes
#define LIMITE_11122 11222
#define FACTOR_11122 3

int aplicar_limite11122(int valor) {
    if (valor > LIMITE_11122) return LIMITE_11122;
    return valor * FACTOR_11122;
}
