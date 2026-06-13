// fichero 17214 -- macros y constantes
#define LIMITE_17214 17314
#define FACTOR_17214 5

int aplicar_limite17214(int valor) {
    if (valor > LIMITE_17214) return LIMITE_17214;
    return valor * FACTOR_17214;
}
