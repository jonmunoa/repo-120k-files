// fichero 31194 -- macros y constantes
#define LIMITE_31194 31294
#define FACTOR_31194 5

int aplicar_limite31194(int valor) {
    if (valor > LIMITE_31194) return LIMITE_31194;
    return valor * FACTOR_31194;
}
