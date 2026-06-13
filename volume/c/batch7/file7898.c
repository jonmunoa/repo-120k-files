// fichero 7898 -- macros y constantes
#define LIMITE_7898 7998
#define FACTOR_7898 4

int aplicar_limite7898(int valor) {
    if (valor > LIMITE_7898) return LIMITE_7898;
    return valor * FACTOR_7898;
}
