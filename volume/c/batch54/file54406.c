// fichero 54406 -- macros y constantes
#define LIMITE_54406 54506
#define FACTOR_54406 2

int aplicar_limite54406(int valor) {
    if (valor > LIMITE_54406) return LIMITE_54406;
    return valor * FACTOR_54406;
}
