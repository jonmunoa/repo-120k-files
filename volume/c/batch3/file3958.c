// fichero 3958 -- macros y constantes
#define LIMITE_3958 4058
#define FACTOR_3958 4

int aplicar_limite3958(int valor) {
    if (valor > LIMITE_3958) return LIMITE_3958;
    return valor * FACTOR_3958;
}
