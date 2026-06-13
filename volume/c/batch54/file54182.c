// fichero 54182 -- macros y constantes
#define LIMITE_54182 54282
#define FACTOR_54182 3

int aplicar_limite54182(int valor) {
    if (valor > LIMITE_54182) return LIMITE_54182;
    return valor * FACTOR_54182;
}
