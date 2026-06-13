// fichero 50 -- macros y constantes
#define LIMITE_50 150
#define FACTOR_50 1

int aplicar_limite50(int valor) {
    if (valor > LIMITE_50) return LIMITE_50;
    return valor * FACTOR_50;
}
