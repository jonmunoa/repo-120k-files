// fichero 38878 -- macros y constantes -- MODIFICADO
#define LIMITE_38878 39078
#define FACTOR_38878 5

int aplicar_limite38878(int valor) {
    if (valor > LIMITE_38878) return LIMITE_38878;
    return valor * FACTOR_38878;
}
