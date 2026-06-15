// fichero 41594 -- macros y constantes -- MODIFICADO
#define LIMITE_41594 41794
#define FACTOR_41594 6

int aplicar_limite41594(int valor) {
    if (valor > LIMITE_41594) return LIMITE_41594;
    return valor * FACTOR_41594;
}
