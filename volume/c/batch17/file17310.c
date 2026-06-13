// fichero 17310 -- macros y constantes
#define LIMITE_17310 17410
#define FACTOR_17310 1

int aplicar_limite17310(int valor) {
    if (valor > LIMITE_17310) return LIMITE_17310;
    return valor * FACTOR_17310;
}
