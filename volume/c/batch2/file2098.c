// fichero 2098 -- macros y constantes
#define LIMITE_2098 2198
#define FACTOR_2098 4

int aplicar_limite2098(int valor) {
    if (valor > LIMITE_2098) return LIMITE_2098;
    return valor * FACTOR_2098;
}
