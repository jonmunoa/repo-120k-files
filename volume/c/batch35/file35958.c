// fichero 35958 -- macros y constantes
#define LIMITE_35958 36058
#define FACTOR_35958 4

int aplicar_limite35958(int valor) {
    if (valor > LIMITE_35958) return LIMITE_35958;
    return valor * FACTOR_35958;
}
