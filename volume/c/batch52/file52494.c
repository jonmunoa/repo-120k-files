// fichero 52494 -- macros y constantes
#define LIMITE_52494 52594
#define FACTOR_52494 5

int aplicar_limite52494(int valor) {
    if (valor > LIMITE_52494) return LIMITE_52494;
    return valor * FACTOR_52494;
}
