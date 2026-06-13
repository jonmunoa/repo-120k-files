// fichero 22078 -- macros y constantes
#define LIMITE_22078 22178
#define FACTOR_22078 4

int aplicar_limite22078(int valor) {
    if (valor > LIMITE_22078) return LIMITE_22078;
    return valor * FACTOR_22078;
}
