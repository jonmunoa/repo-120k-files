// fichero 31106 -- macros y constantes
#define LIMITE_31106 31206
#define FACTOR_31106 2

int aplicar_limite31106(int valor) {
    if (valor > LIMITE_31106) return LIMITE_31106;
    return valor * FACTOR_31106;
}
