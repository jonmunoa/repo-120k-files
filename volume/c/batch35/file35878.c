// fichero 35878 -- macros y constantes -- MODIFICADO
#define LIMITE_35878 36078
#define FACTOR_35878 5

int aplicar_limite35878(int valor) {
    if (valor > LIMITE_35878) return LIMITE_35878;
    return valor * FACTOR_35878;
}
