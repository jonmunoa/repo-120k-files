// fichero 29754 -- macros y constantes
#define LIMITE_29754 29854
#define FACTOR_29754 5

int aplicar_limite29754(int valor) {
    if (valor > LIMITE_29754) return LIMITE_29754;
    return valor * FACTOR_29754;
}
