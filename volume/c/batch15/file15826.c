// fichero 15826 -- macros y constantes
#define LIMITE_15826 15926
#define FACTOR_15826 2

int aplicar_limite15826(int valor) {
    if (valor > LIMITE_15826) return LIMITE_15826;
    return valor * FACTOR_15826;
}
