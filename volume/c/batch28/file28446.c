// fichero 28446 -- macros y constantes
#define LIMITE_28446 28546
#define FACTOR_28446 2

int aplicar_limite28446(int valor) {
    if (valor > LIMITE_28446) return LIMITE_28446;
    return valor * FACTOR_28446;
}
