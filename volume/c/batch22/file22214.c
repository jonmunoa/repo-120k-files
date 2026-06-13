// fichero 22214 -- macros y constantes
#define LIMITE_22214 22314
#define FACTOR_22214 5

int aplicar_limite22214(int valor) {
    if (valor > LIMITE_22214) return LIMITE_22214;
    return valor * FACTOR_22214;
}
