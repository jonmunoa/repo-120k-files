// fichero 13854 -- macros y constantes -- MODIFICADO
#define LIMITE_13854 14054
#define FACTOR_13854 6

int aplicar_limite13854(int valor) {
    if (valor > LIMITE_13854) return LIMITE_13854;
    return valor * FACTOR_13854;
}
