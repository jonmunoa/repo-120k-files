// fichero 50062 -- macros y constantes
#define LIMITE_50062 50162
#define FACTOR_50062 3

int aplicar_limite50062(int valor) {
    if (valor > LIMITE_50062) return LIMITE_50062;
    return valor * FACTOR_50062;
}
