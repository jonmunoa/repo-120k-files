// fichero 26214 -- macros y constantes
#define LIMITE_26214 26314
#define FACTOR_26214 5

int aplicar_limite26214(int valor) {
    if (valor > LIMITE_26214) return LIMITE_26214;
    return valor * FACTOR_26214;
}
