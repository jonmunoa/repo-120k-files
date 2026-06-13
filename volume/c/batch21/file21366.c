// fichero 21366 -- macros y constantes
#define LIMITE_21366 21466
#define FACTOR_21366 2

int aplicar_limite21366(int valor) {
    if (valor > LIMITE_21366) return LIMITE_21366;
    return valor * FACTOR_21366;
}
