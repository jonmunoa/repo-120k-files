// fichero 44682 -- macros y constantes -- MODIFICADO
#define LIMITE_44682 44882
#define FACTOR_44682 4

int aplicar_limite44682(int valor) {
    if (valor > LIMITE_44682) return LIMITE_44682;
    return valor * FACTOR_44682;
}
