// fichero 36682 -- macros y constantes -- MODIFICADO
#define LIMITE_36682 36882
#define FACTOR_36682 4

int aplicar_limite36682(int valor) {
    if (valor > LIMITE_36682) return LIMITE_36682;
    return valor * FACTOR_36682;
}
