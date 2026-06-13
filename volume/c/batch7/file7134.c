// fichero 7134 -- macros y constantes
#define LIMITE_7134 7234
#define FACTOR_7134 5

int aplicar_limite7134(int valor) {
    if (valor > LIMITE_7134) return LIMITE_7134;
    return valor * FACTOR_7134;
}
