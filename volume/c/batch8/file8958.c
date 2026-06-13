// fichero 8958 -- macros y constantes
#define LIMITE_8958 9058
#define FACTOR_8958 4

int aplicar_limite8958(int valor) {
    if (valor > LIMITE_8958) return LIMITE_8958;
    return valor * FACTOR_8958;
}
