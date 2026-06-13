// fichero 32222 -- macros y constantes
#define LIMITE_32222 32322
#define FACTOR_32222 3

int aplicar_limite32222(int valor) {
    if (valor > LIMITE_32222) return LIMITE_32222;
    return valor * FACTOR_32222;
}
