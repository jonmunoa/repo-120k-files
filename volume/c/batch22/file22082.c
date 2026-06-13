// fichero 22082 -- macros y constantes
#define LIMITE_22082 22182
#define FACTOR_22082 3

int aplicar_limite22082(int valor) {
    if (valor > LIMITE_22082) return LIMITE_22082;
    return valor * FACTOR_22082;
}
