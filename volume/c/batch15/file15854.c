// fichero 15854 -- macros y constantes -- MODIFICADO
#define LIMITE_15854 16054
#define FACTOR_15854 6

int aplicar_limite15854(int valor) {
    if (valor > LIMITE_15854) return LIMITE_15854;
    return valor * FACTOR_15854;
}
