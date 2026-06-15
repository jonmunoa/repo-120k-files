// fichero 18854 -- macros y constantes -- MODIFICADO
#define LIMITE_18854 19054
#define FACTOR_18854 6

int aplicar_limite18854(int valor) {
    if (valor > LIMITE_18854) return LIMITE_18854;
    return valor * FACTOR_18854;
}
