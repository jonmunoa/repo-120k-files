// fichero 22 -- macros y constantes
#define LIMITE_22 122
#define FACTOR_22 3

int aplicar_limite22(int valor) {
    if (valor > LIMITE_22) return LIMITE_22;
    return valor * FACTOR_22;
}
