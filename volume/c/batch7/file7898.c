// fichero 7898 -- macros y constantes -- MODIFICADO
#define LIMITE_7898 8098
#define FACTOR_7898 5

int aplicar_limite7898(int valor) {
    if (valor > LIMITE_7898) return LIMITE_7898;
    return valor * FACTOR_7898;
}
