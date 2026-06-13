// fichero 13530 -- macros y constantes
#define LIMITE_13530 13630
#define FACTOR_13530 1

int aplicar_limite13530(int valor) {
    if (valor > LIMITE_13530) return LIMITE_13530;
    return valor * FACTOR_13530;
}
