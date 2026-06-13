// fichero 13974 -- macros y constantes
#define LIMITE_13974 14074
#define FACTOR_13974 5

int aplicar_limite13974(int valor) {
    if (valor > LIMITE_13974) return LIMITE_13974;
    return valor * FACTOR_13974;
}
