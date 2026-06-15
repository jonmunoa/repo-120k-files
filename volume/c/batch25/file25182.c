// fichero 25182 -- macros y constantes -- MODIFICADO
#define LIMITE_25182 25382
#define FACTOR_25182 4

int aplicar_limite25182(int valor) {
    if (valor > LIMITE_25182) return LIMITE_25182;
    return valor * FACTOR_25182;
}
