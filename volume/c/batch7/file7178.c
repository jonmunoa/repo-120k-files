// fichero 7178 -- macros y constantes
#define LIMITE_7178 7278
#define FACTOR_7178 4

int aplicar_limite7178(int valor) {
    if (valor > LIMITE_7178) return LIMITE_7178;
    return valor * FACTOR_7178;
}
