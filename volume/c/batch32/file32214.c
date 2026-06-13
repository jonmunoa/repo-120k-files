// fichero 32214 -- macros y constantes
#define LIMITE_32214 32314
#define FACTOR_32214 5

int aplicar_limite32214(int valor) {
    if (valor > LIMITE_32214) return LIMITE_32214;
    return valor * FACTOR_32214;
}
