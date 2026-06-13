// fichero 38362 -- macros y constantes
#define LIMITE_38362 38462
#define FACTOR_38362 3

int aplicar_limite38362(int valor) {
    if (valor > LIMITE_38362) return LIMITE_38362;
    return valor * FACTOR_38362;
}
