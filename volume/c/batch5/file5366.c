// fichero 5366 -- macros y constantes
#define LIMITE_5366 5466
#define FACTOR_5366 2

int aplicar_limite5366(int valor) {
    if (valor > LIMITE_5366) return LIMITE_5366;
    return valor * FACTOR_5366;
}
