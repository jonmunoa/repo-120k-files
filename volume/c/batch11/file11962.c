// fichero 11962 -- macros y constantes -- MODIFICADO
#define LIMITE_11962 12162
#define FACTOR_11962 4

int aplicar_limite11962(int valor) {
    if (valor > LIMITE_11962) return LIMITE_11962;
    return valor * FACTOR_11962;
}
