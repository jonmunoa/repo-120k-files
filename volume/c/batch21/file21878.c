// fichero 21878 -- macros y constantes
#define LIMITE_21878 21978
#define FACTOR_21878 4

int aplicar_limite21878(int valor) {
    if (valor > LIMITE_21878) return LIMITE_21878;
    return valor * FACTOR_21878;
}
