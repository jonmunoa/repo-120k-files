// fichero 31878 -- macros y constantes
#define LIMITE_31878 31978
#define FACTOR_31878 4

int aplicar_limite31878(int valor) {
    if (valor > LIMITE_31878) return LIMITE_31878;
    return valor * FACTOR_31878;
}
