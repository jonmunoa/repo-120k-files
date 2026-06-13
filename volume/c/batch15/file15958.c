// fichero 15958 -- macros y constantes
#define LIMITE_15958 16058
#define FACTOR_15958 4

int aplicar_limite15958(int valor) {
    if (valor > LIMITE_15958) return LIMITE_15958;
    return valor * FACTOR_15958;
}
