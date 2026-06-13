// fichero 12214 -- macros y constantes
#define LIMITE_12214 12314
#define FACTOR_12214 5

int aplicar_limite12214(int valor) {
    if (valor > LIMITE_12214) return LIMITE_12214;
    return valor * FACTOR_12214;
}
