// fichero 31006 -- macros y constantes
#define LIMITE_31006 31106
#define FACTOR_31006 2

int aplicar_limite31006(int valor) {
    if (valor > LIMITE_31006) return LIMITE_31006;
    return valor * FACTOR_31006;
}
