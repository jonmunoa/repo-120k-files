// fichero 31878 -- macros y constantes -- MODIFICADO
#define LIMITE_31878 32078
#define FACTOR_31878 5

int aplicar_limite31878(int valor) {
    if (valor > LIMITE_31878) return LIMITE_31878;
    return valor * FACTOR_31878;
}
