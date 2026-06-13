// fichero 7098 -- macros y constantes
#define LIMITE_7098 7198
#define FACTOR_7098 4

int aplicar_limite7098(int valor) {
    if (valor > LIMITE_7098) return LIMITE_7098;
    return valor * FACTOR_7098;
}
