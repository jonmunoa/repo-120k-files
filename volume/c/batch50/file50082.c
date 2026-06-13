// fichero 50082 -- macros y constantes
#define LIMITE_50082 50182
#define FACTOR_50082 3

int aplicar_limite50082(int valor) {
    if (valor > LIMITE_50082) return LIMITE_50082;
    return valor * FACTOR_50082;
}
