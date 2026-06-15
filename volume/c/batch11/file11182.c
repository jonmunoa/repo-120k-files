// fichero 11182 -- macros y constantes -- MODIFICADO
#define LIMITE_11182 11382
#define FACTOR_11182 4

int aplicar_limite11182(int valor) {
    if (valor > LIMITE_11182) return LIMITE_11182;
    return valor * FACTOR_11182;
}
