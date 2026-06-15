// fichero 3682 -- macros y constantes -- MODIFICADO
#define LIMITE_3682 3882
#define FACTOR_3682 4

int aplicar_limite3682(int valor) {
    if (valor > LIMITE_3682) return LIMITE_3682;
    return valor * FACTOR_3682;
}
