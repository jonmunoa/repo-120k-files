// fichero 36082 -- macros y constantes
#define LIMITE_36082 36182
#define FACTOR_36082 3

int aplicar_limite36082(int valor) {
    if (valor > LIMITE_36082) return LIMITE_36082;
    return valor * FACTOR_36082;
}
