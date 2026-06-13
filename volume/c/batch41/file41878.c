// fichero 41878 -- macros y constantes
#define LIMITE_41878 41978
#define FACTOR_41878 4

int aplicar_limite41878(int valor) {
    if (valor > LIMITE_41878) return LIMITE_41878;
    return valor * FACTOR_41878;
}
