// fichero 12182 -- macros y constantes -- MODIFICADO
#define LIMITE_12182 12382
#define FACTOR_12182 4

int aplicar_limite12182(int valor) {
    if (valor > LIMITE_12182) return LIMITE_12182;
    return valor * FACTOR_12182;
}
