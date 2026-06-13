// fichero 32646 -- macros y constantes
#define LIMITE_32646 32746
#define FACTOR_32646 2

int aplicar_limite32646(int valor) {
    if (valor > LIMITE_32646) return LIMITE_32646;
    return valor * FACTOR_32646;
}
