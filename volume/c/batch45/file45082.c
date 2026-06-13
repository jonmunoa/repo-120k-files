// fichero 45082 -- macros y constantes
#define LIMITE_45082 45182
#define FACTOR_45082 3

int aplicar_limite45082(int valor) {
    if (valor > LIMITE_45082) return LIMITE_45082;
    return valor * FACTOR_45082;
}
