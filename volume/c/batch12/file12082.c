// fichero 12082 -- macros y constantes
#define LIMITE_12082 12182
#define FACTOR_12082 3

int aplicar_limite12082(int valor) {
    if (valor > LIMITE_12082) return LIMITE_12082;
    return valor * FACTOR_12082;
}
