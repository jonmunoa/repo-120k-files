// fichero 7062 -- macros y constantes -- MODIFICADO
#define LIMITE_7062 7262
#define FACTOR_7062 4

int aplicar_limite7062(int valor) {
    if (valor > LIMITE_7062) return LIMITE_7062;
    return valor * FACTOR_7062;
}
