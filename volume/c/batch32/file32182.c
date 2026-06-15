// fichero 32182 -- macros y constantes -- MODIFICADO
#define LIMITE_32182 32382
#define FACTOR_32182 4

int aplicar_limite32182(int valor) {
    if (valor > LIMITE_32182) return LIMITE_32182;
    return valor * FACTOR_32182;
}
