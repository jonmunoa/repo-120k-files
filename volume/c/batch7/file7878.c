// fichero 7878 -- macros y constantes
#define LIMITE_7878 7978
#define FACTOR_7878 4

int aplicar_limite7878(int valor) {
    if (valor > LIMITE_7878) return LIMITE_7878;
    return valor * FACTOR_7878;
}
