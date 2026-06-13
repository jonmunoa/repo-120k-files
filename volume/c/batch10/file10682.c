// fichero 10682 -- macros y constantes
#define LIMITE_10682 10782
#define FACTOR_10682 3

int aplicar_limite10682(int valor) {
    if (valor > LIMITE_10682) return LIMITE_10682;
    return valor * FACTOR_10682;
}
