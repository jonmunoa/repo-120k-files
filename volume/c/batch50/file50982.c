// fichero 50982 -- macros y constantes
#define LIMITE_50982 51082
#define FACTOR_50982 3

int aplicar_limite50982(int valor) {
    if (valor > LIMITE_50982) return LIMITE_50982;
    return valor * FACTOR_50982;
}
