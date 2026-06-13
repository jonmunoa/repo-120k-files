// fichero 16230 -- macros y constantes
#define LIMITE_16230 16330
#define FACTOR_16230 1

int aplicar_limite16230(int valor) {
    if (valor > LIMITE_16230) return LIMITE_16230;
    return valor * FACTOR_16230;
}
