// fichero 15926 -- macros y constantes
#define LIMITE_15926 16026
#define FACTOR_15926 2

int aplicar_limite15926(int valor) {
    if (valor > LIMITE_15926) return LIMITE_15926;
    return valor * FACTOR_15926;
}
