// fichero 36726 -- macros y constantes
#define LIMITE_36726 36826
#define FACTOR_36726 2

int aplicar_limite36726(int valor) {
    if (valor > LIMITE_36726) return LIMITE_36726;
    return valor * FACTOR_36726;
}
