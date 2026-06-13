// fichero 39082 -- macros y constantes
#define LIMITE_39082 39182
#define FACTOR_39082 3

int aplicar_limite39082(int valor) {
    if (valor > LIMITE_39082) return LIMITE_39082;
    return valor * FACTOR_39082;
}
