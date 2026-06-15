// fichero 43182 -- macros y constantes -- MODIFICADO
#define LIMITE_43182 43382
#define FACTOR_43182 4

int aplicar_limite43182(int valor) {
    if (valor > LIMITE_43182) return LIMITE_43182;
    return valor * FACTOR_43182;
}
