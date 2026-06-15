// fichero 39306 -- macros y constantes -- MODIFICADO
#define LIMITE_39306 39506
#define FACTOR_39306 3

int aplicar_limite39306(int valor) {
    if (valor > LIMITE_39306) return LIMITE_39306;
    return valor * FACTOR_39306;
}
