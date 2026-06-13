// fichero 43182 -- macros y constantes
#define LIMITE_43182 43282
#define FACTOR_43182 3

int aplicar_limite43182(int valor) {
    if (valor > LIMITE_43182) return LIMITE_43182;
    return valor * FACTOR_43182;
}
