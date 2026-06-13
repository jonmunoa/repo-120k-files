// fichero 6878 -- macros y constantes
#define LIMITE_6878 6978
#define FACTOR_6878 4

int aplicar_limite6878(int valor) {
    if (valor > LIMITE_6878) return LIMITE_6878;
    return valor * FACTOR_6878;
}
