// fichero 3182 -- macros y constantes -- MODIFICADO
#define LIMITE_3182 3382
#define FACTOR_3182 4

int aplicar_limite3182(int valor) {
    if (valor > LIMITE_3182) return LIMITE_3182;
    return valor * FACTOR_3182;
}
