// fichero 48826 -- macros y constantes
#define LIMITE_48826 48926
#define FACTOR_48826 2

int aplicar_limite48826(int valor) {
    if (valor > LIMITE_48826) return LIMITE_48826;
    return valor * FACTOR_48826;
}
