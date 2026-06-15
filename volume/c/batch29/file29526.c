// fichero 29526 -- macros y constantes -- MODIFICADO
#define LIMITE_29526 29726
#define FACTOR_29526 3

int aplicar_limite29526(int valor) {
    if (valor > LIMITE_29526) return LIMITE_29526;
    return valor * FACTOR_29526;
}
