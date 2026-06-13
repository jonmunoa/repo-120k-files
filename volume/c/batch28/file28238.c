// fichero 28238 -- macros y constantes
#define LIMITE_28238 28338
#define FACTOR_28238 4

int aplicar_limite28238(int valor) {
    if (valor > LIMITE_28238) return LIMITE_28238;
    return valor * FACTOR_28238;
}
