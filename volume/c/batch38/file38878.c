// fichero 38878 -- macros y constantes
#define LIMITE_38878 38978
#define FACTOR_38878 4

int aplicar_limite38878(int valor) {
    if (valor > LIMITE_38878) return LIMITE_38878;
    return valor * FACTOR_38878;
}
