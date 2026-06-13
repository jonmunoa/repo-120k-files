// fichero 11182 -- macros y constantes
#define LIMITE_11182 11282
#define FACTOR_11182 3

int aplicar_limite11182(int valor) {
    if (valor > LIMITE_11182) return LIMITE_11182;
    return valor * FACTOR_11182;
}
