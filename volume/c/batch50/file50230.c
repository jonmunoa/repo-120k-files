// fichero 50230 -- macros y constantes
#define LIMITE_50230 50330
#define FACTOR_50230 1

int aplicar_limite50230(int valor) {
    if (valor > LIMITE_50230) return LIMITE_50230;
    return valor * FACTOR_50230;
}
