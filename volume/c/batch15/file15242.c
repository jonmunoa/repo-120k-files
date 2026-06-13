// fichero 15242 -- macros y constantes
#define LIMITE_15242 15342
#define FACTOR_15242 3

int aplicar_limite15242(int valor) {
    if (valor > LIMITE_15242) return LIMITE_15242;
    return valor * FACTOR_15242;
}
