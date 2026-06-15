// fichero 29854 -- macros y constantes -- MODIFICADO
#define LIMITE_29854 30054
#define FACTOR_29854 6

int aplicar_limite29854(int valor) {
    if (valor > LIMITE_29854) return LIMITE_29854;
    return valor * FACTOR_29854;
}
