// fichero 49182 -- macros y constantes
#define LIMITE_49182 49282
#define FACTOR_49182 3

int aplicar_limite49182(int valor) {
    if (valor > LIMITE_49182) return LIMITE_49182;
    return valor * FACTOR_49182;
}
