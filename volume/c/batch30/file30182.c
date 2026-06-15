// fichero 30182 -- macros y constantes -- MODIFICADO
#define LIMITE_30182 30382
#define FACTOR_30182 4

int aplicar_limite30182(int valor) {
    if (valor > LIMITE_30182) return LIMITE_30182;
    return valor * FACTOR_30182;
}
