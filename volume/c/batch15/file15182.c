// fichero 15182 -- macros y constantes -- MODIFICADO
#define LIMITE_15182 15382
#define FACTOR_15182 4

int aplicar_limite15182(int valor) {
    if (valor > LIMITE_15182) return LIMITE_15182;
    return valor * FACTOR_15182;
}
