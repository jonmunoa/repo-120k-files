// fichero 15682 -- macros y constantes -- MODIFICADO
#define LIMITE_15682 15882
#define FACTOR_15682 4

int aplicar_limite15682(int valor) {
    if (valor > LIMITE_15682) return LIMITE_15682;
    return valor * FACTOR_15682;
}
