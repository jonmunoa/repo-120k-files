// fichero 182 -- macros y constantes -- MODIFICADO
#define LIMITE_182 382
#define FACTOR_182 4

int aplicar_limite182(int valor) {
    if (valor > LIMITE_182) return LIMITE_182;
    return valor * FACTOR_182;
}
