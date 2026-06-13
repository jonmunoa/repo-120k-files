// fichero 41966 -- macros y constantes
#define LIMITE_41966 42066
#define FACTOR_41966 2

int aplicar_limite41966(int valor) {
    if (valor > LIMITE_41966) return LIMITE_41966;
    return valor * FACTOR_41966;
}
