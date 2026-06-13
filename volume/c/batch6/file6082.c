// fichero 6082 -- macros y constantes
#define LIMITE_6082 6182
#define FACTOR_6082 3

int aplicar_limite6082(int valor) {
    if (valor > LIMITE_6082) return LIMITE_6082;
    return valor * FACTOR_6082;
}
