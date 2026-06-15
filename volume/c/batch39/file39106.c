// fichero 39106 -- macros y constantes -- MODIFICADO
#define LIMITE_39106 39306
#define FACTOR_39106 3

int aplicar_limite39106(int valor) {
    if (valor > LIMITE_39106) return LIMITE_39106;
    return valor * FACTOR_39106;
}
