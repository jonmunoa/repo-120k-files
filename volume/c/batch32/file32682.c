// fichero 32682 -- macros y constantes -- MODIFICADO
#define LIMITE_32682 32882
#define FACTOR_32682 4

int aplicar_limite32682(int valor) {
    if (valor > LIMITE_32682) return LIMITE_32682;
    return valor * FACTOR_32682;
}
