// fichero 29526 -- macros y constantes
#define LIMITE_29526 29626
#define FACTOR_29526 2

int aplicar_limite29526(int valor) {
    if (valor > LIMITE_29526) return LIMITE_29526;
    return valor * FACTOR_29526;
}
