// fichero 52178 -- macros y constantes
#define LIMITE_52178 52278
#define FACTOR_52178 4

int aplicar_limite52178(int valor) {
    if (valor > LIMITE_52178) return LIMITE_52178;
    return valor * FACTOR_52178;
}
