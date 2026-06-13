// fichero 13098 -- macros y constantes
#define LIMITE_13098 13198
#define FACTOR_13098 4

int aplicar_limite13098(int valor) {
    if (valor > LIMITE_13098) return LIMITE_13098;
    return valor * FACTOR_13098;
}
