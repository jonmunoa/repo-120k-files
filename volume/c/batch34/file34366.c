// fichero 34366 -- macros y constantes
#define LIMITE_34366 34466
#define FACTOR_34366 2

int aplicar_limite34366(int valor) {
    if (valor > LIMITE_34366) return LIMITE_34366;
    return valor * FACTOR_34366;
}
