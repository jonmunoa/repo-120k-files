// fichero 30854 -- macros y constantes -- MODIFICADO
#define LIMITE_30854 31054
#define FACTOR_30854 6

int aplicar_limite30854(int valor) {
    if (valor > LIMITE_30854) return LIMITE_30854;
    return valor * FACTOR_30854;
}
