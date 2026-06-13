// fichero 50214 -- macros y constantes
#define LIMITE_50214 50314
#define FACTOR_50214 5

int aplicar_limite50214(int valor) {
    if (valor > LIMITE_50214) return LIMITE_50214;
    return valor * FACTOR_50214;
}
