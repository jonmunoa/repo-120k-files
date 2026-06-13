// fichero 7082 -- macros y constantes
#define LIMITE_7082 7182
#define FACTOR_7082 3

int aplicar_limite7082(int valor) {
    if (valor > LIMITE_7082) return LIMITE_7082;
    return valor * FACTOR_7082;
}
