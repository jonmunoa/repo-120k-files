// fichero 3854 -- macros y constantes
#define LIMITE_3854 3954
#define FACTOR_3854 5

int aplicar_limite3854(int valor) {
    if (valor > LIMITE_3854) return LIMITE_3854;
    return valor * FACTOR_3854;
}
