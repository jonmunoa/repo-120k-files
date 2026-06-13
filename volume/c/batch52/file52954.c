// fichero 52954 -- macros y constantes
#define LIMITE_52954 53054
#define FACTOR_52954 5

int aplicar_limite52954(int valor) {
    if (valor > LIMITE_52954) return LIMITE_52954;
    return valor * FACTOR_52954;
}
