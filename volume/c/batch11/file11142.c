// fichero 11142 -- macros y constantes
#define LIMITE_11142 11242
#define FACTOR_11142 3

int aplicar_limite11142(int valor) {
    if (valor > LIMITE_11142) return LIMITE_11142;
    return valor * FACTOR_11142;
}
