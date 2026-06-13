// fichero 25958 -- macros y constantes
#define LIMITE_25958 26058
#define FACTOR_25958 4

int aplicar_limite25958(int valor) {
    if (valor > LIMITE_25958) return LIMITE_25958;
    return valor * FACTOR_25958;
}
