// fichero 16494 -- macros y constantes
#define LIMITE_16494 16594
#define FACTOR_16494 5

int aplicar_limite16494(int valor) {
    if (valor > LIMITE_16494) return LIMITE_16494;
    return valor * FACTOR_16494;
}
