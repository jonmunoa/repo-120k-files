// fichero 13682 -- macros y constantes -- MODIFICADO
#define LIMITE_13682 13882
#define FACTOR_13682 4

int aplicar_limite13682(int valor) {
    if (valor > LIMITE_13682) return LIMITE_13682;
    return valor * FACTOR_13682;
}
