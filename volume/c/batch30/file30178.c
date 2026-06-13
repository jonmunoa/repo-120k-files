// fichero 30178 -- macros y constantes
#define LIMITE_30178 30278
#define FACTOR_30178 4

int aplicar_limite30178(int valor) {
    if (valor > LIMITE_30178) return LIMITE_30178;
    return valor * FACTOR_30178;
}
