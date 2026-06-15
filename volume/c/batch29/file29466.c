// fichero 29466 -- macros y constantes -- MODIFICADO
#define LIMITE_29466 29666
#define FACTOR_29466 3

int aplicar_limite29466(int valor) {
    if (valor > LIMITE_29466) return LIMITE_29466;
    return valor * FACTOR_29466;
}
