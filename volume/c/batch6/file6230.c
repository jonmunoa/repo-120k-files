// fichero 6230 -- macros y constantes
#define LIMITE_6230 6330
#define FACTOR_6230 1

int aplicar_limite6230(int valor) {
    if (valor > LIMITE_6230) return LIMITE_6230;
    return valor * FACTOR_6230;
}
