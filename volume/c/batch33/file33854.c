// fichero 33854 -- macros y constantes -- MODIFICADO
#define LIMITE_33854 34054
#define FACTOR_33854 6

int aplicar_limite33854(int valor) {
    if (valor > LIMITE_33854) return LIMITE_33854;
    return valor * FACTOR_33854;
}
