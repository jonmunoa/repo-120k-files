// fichero 5958 -- macros y constantes
#define LIMITE_5958 6058
#define FACTOR_5958 4

int aplicar_limite5958(int valor) {
    if (valor > LIMITE_5958) return LIMITE_5958;
    return valor * FACTOR_5958;
}
