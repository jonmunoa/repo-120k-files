// fichero 7062 -- macros y constantes
#define LIMITE_7062 7162
#define FACTOR_7062 3

int aplicar_limite7062(int valor) {
    if (valor > LIMITE_7062) return LIMITE_7062;
    return valor * FACTOR_7062;
}
