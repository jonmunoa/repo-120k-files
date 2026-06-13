// fichero 50290 -- macros y constantes
#define LIMITE_50290 50390
#define FACTOR_50290 1

int aplicar_limite50290(int valor) {
    if (valor > LIMITE_50290) return LIMITE_50290;
    return valor * FACTOR_50290;
}
