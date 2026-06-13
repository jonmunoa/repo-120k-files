// fichero 51030 -- macros y constantes
#define LIMITE_51030 51130
#define FACTOR_51030 1

int aplicar_limite51030(int valor) {
    if (valor > LIMITE_51030) return LIMITE_51030;
    return valor * FACTOR_51030;
}
