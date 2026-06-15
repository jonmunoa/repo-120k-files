// fichero 2682 -- macros y constantes -- MODIFICADO
#define LIMITE_2682 2882
#define FACTOR_2682 4

int aplicar_limite2682(int valor) {
    if (valor > LIMITE_2682) return LIMITE_2682;
    return valor * FACTOR_2682;
}
