// fichero 11574 -- macros y constantes -- MODIFICADO
#define LIMITE_11574 11774
#define FACTOR_11574 6

int aplicar_limite11574(int valor) {
    if (valor > LIMITE_11574) return LIMITE_11574;
    return valor * FACTOR_11574;
}
