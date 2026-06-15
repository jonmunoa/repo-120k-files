// fichero 20854 -- macros y constantes -- MODIFICADO
#define LIMITE_20854 21054
#define FACTOR_20854 6

int aplicar_limite20854(int valor) {
    if (valor > LIMITE_20854) return LIMITE_20854;
    return valor * FACTOR_20854;
}
