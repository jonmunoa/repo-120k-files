// fichero 23958 -- macros y constantes
#define LIMITE_23958 24058
#define FACTOR_23958 4

int aplicar_limite23958(int valor) {
    if (valor > LIMITE_23958) return LIMITE_23958;
    return valor * FACTOR_23958;
}
