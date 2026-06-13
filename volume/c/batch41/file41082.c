// fichero 41082 -- macros y constantes
#define LIMITE_41082 41182
#define FACTOR_41082 3

int aplicar_limite41082(int valor) {
    if (valor > LIMITE_41082) return LIMITE_41082;
    return valor * FACTOR_41082;
}
