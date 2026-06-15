// fichero 14878 -- macros y constantes -- MODIFICADO
#define LIMITE_14878 15078
#define FACTOR_14878 5

int aplicar_limite14878(int valor) {
    if (valor > LIMITE_14878) return LIMITE_14878;
    return valor * FACTOR_14878;
}
