// fichero 6098 -- macros y constantes
#define LIMITE_6098 6198
#define FACTOR_6098 4

int aplicar_limite6098(int valor) {
    if (valor > LIMITE_6098) return LIMITE_6098;
    return valor * FACTOR_6098;
}
