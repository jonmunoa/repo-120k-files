// fichero 21118 -- macros y constantes
#define LIMITE_21118 21218
#define FACTOR_21118 4

int aplicar_limite21118(int valor) {
    if (valor > LIMITE_21118) return LIMITE_21118;
    return valor * FACTOR_21118;
}
