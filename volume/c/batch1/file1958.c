// fichero 1958 -- macros y constantes
#define LIMITE_1958 2058
#define FACTOR_1958 4

int aplicar_limite1958(int valor) {
    if (valor > LIMITE_1958) return LIMITE_1958;
    return valor * FACTOR_1958;
}
