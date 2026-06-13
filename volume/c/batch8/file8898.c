// fichero 8898 -- macros y constantes
#define LIMITE_8898 8998
#define FACTOR_8898 4

int aplicar_limite8898(int valor) {
    if (valor > LIMITE_8898) return LIMITE_8898;
    return valor * FACTOR_8898;
}
