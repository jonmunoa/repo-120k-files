// fichero 13082 -- macros y constantes
#define LIMITE_13082 13182
#define FACTOR_13082 3

int aplicar_limite13082(int valor) {
    if (valor > LIMITE_13082) return LIMITE_13082;
    return valor * FACTOR_13082;
}
