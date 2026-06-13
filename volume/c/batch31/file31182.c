// fichero 31182 -- macros y constantes
#define LIMITE_31182 31282
#define FACTOR_31182 3

int aplicar_limite31182(int valor) {
    if (valor > LIMITE_31182) return LIMITE_31182;
    return valor * FACTOR_31182;
}
