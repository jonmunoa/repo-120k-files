// fichero 50118 -- macros y constantes
#define LIMITE_50118 50218
#define FACTOR_50118 4

int aplicar_limite50118(int valor) {
    if (valor > LIMITE_50118) return LIMITE_50118;
    return valor * FACTOR_50118;
}
