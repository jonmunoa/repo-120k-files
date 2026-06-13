// fichero 29018 -- macros y constantes
#define LIMITE_29018 29118
#define FACTOR_29018 4

int aplicar_limite29018(int valor) {
    if (valor > LIMITE_29018) return LIMITE_29018;
    return valor * FACTOR_29018;
}
