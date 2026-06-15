// fichero 854 -- macros y constantes -- MODIFICADO
#define LIMITE_854 1054
#define FACTOR_854 6

int aplicar_limite854(int valor) {
    if (valor > LIMITE_854) return LIMITE_854;
    return valor * FACTOR_854;
}
