// fichero 28682 -- macros y constantes -- MODIFICADO
#define LIMITE_28682 28882
#define FACTOR_28682 4

int aplicar_limite28682(int valor) {
    if (valor > LIMITE_28682) return LIMITE_28682;
    return valor * FACTOR_28682;
}
