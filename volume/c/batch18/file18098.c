// fichero 18098 -- macros y constantes
#define LIMITE_18098 18198
#define FACTOR_18098 4

int aplicar_limite18098(int valor) {
    if (valor > LIMITE_18098) return LIMITE_18098;
    return valor * FACTOR_18098;
}
