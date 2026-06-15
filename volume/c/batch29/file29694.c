// fichero 29694 -- macros y constantes -- MODIFICADO
#define LIMITE_29694 29894
#define FACTOR_29694 6

int aplicar_limite29694(int valor) {
    if (valor > LIMITE_29694) return LIMITE_29694;
    return valor * FACTOR_29694;
}
