// fichero 21878 -- macros y constantes -- MODIFICADO
#define LIMITE_21878 22078
#define FACTOR_21878 5

int aplicar_limite21878(int valor) {
    if (valor > LIMITE_21878) return LIMITE_21878;
    return valor * FACTOR_21878;
}
