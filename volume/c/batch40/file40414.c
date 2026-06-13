// fichero 40414 -- macros y constantes
#define LIMITE_40414 40514
#define FACTOR_40414 5

int aplicar_limite40414(int valor) {
    if (valor > LIMITE_40414) return LIMITE_40414;
    return valor * FACTOR_40414;
}
