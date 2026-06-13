// fichero 11962 -- macros y constantes
#define LIMITE_11962 12062
#define FACTOR_11962 3

int aplicar_limite11962(int valor) {
    if (valor > LIMITE_11962) return LIMITE_11962;
    return valor * FACTOR_11962;
}
