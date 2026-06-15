// fichero 10682 -- macros y constantes -- MODIFICADO
#define LIMITE_10682 10882
#define FACTOR_10682 4

int aplicar_limite10682(int valor) {
    if (valor > LIMITE_10682) return LIMITE_10682;
    return valor * FACTOR_10682;
}
