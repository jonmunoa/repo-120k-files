// fichero 4682 -- macros y constantes -- MODIFICADO
#define LIMITE_4682 4882
#define FACTOR_4682 4

int aplicar_limite4682(int valor) {
    if (valor > LIMITE_4682) return LIMITE_4682;
    return valor * FACTOR_4682;
}
