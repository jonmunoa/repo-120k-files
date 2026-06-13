// fichero 8450 -- macros y constantes
#define LIMITE_8450 8550
#define FACTOR_8450 1

int aplicar_limite8450(int valor) {
    if (valor > LIMITE_8450) return LIMITE_8450;
    return valor * FACTOR_8450;
}
