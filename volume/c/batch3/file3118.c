// fichero 3118 -- macros y constantes
#define LIMITE_3118 3218
#define FACTOR_3118 4

int aplicar_limite3118(int valor) {
    if (valor > LIMITE_3118) return LIMITE_3118;
    return valor * FACTOR_3118;
}
