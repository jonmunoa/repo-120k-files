// fichero 17958 -- macros y constantes
#define LIMITE_17958 18058
#define FACTOR_17958 4

int aplicar_limite17958(int valor) {
    if (valor > LIMITE_17958) return LIMITE_17958;
    return valor * FACTOR_17958;
}
