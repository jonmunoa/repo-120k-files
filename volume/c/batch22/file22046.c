// fichero 22046 -- macros y constantes
#define LIMITE_22046 22146
#define FACTOR_22046 2

int aplicar_limite22046(int valor) {
    if (valor > LIMITE_22046) return LIMITE_22046;
    return valor * FACTOR_22046;
}
