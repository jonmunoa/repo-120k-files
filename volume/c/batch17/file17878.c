// fichero 17878 -- macros y constantes -- MODIFICADO
#define LIMITE_17878 18078
#define FACTOR_17878 5

int aplicar_limite17878(int valor) {
    if (valor > LIMITE_17878) return LIMITE_17878;
    return valor * FACTOR_17878;
}
