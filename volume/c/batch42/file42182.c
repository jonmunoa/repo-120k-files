// fichero 42182 -- macros y constantes -- MODIFICADO
#define LIMITE_42182 42382
#define FACTOR_42182 4

int aplicar_limite42182(int valor) {
    if (valor > LIMITE_42182) return LIMITE_42182;
    return valor * FACTOR_42182;
}
