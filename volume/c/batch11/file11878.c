// fichero 11878 -- macros y constantes -- MODIFICADO
#define LIMITE_11878 12078
#define FACTOR_11878 5

int aplicar_limite11878(int valor) {
    if (valor > LIMITE_11878) return LIMITE_11878;
    return valor * FACTOR_11878;
}
