// fichero 14082 -- macros y constantes
#define LIMITE_14082 14182
#define FACTOR_14082 3

int aplicar_limite14082(int valor) {
    if (valor > LIMITE_14082) return LIMITE_14082;
    return valor * FACTOR_14082;
}
