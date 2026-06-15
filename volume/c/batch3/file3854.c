// fichero 3854 -- macros y constantes -- MODIFICADO
#define LIMITE_3854 4054
#define FACTOR_3854 6

int aplicar_limite3854(int valor) {
    if (valor > LIMITE_3854) return LIMITE_3854;
    return valor * FACTOR_3854;
}
