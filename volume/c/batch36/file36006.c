// fichero 36006 -- macros y constantes
#define LIMITE_36006 36106
#define FACTOR_36006 2

int aplicar_limite36006(int valor) {
    if (valor > LIMITE_36006) return LIMITE_36006;
    return valor * FACTOR_36006;
}
