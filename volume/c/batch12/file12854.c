// fichero 12854 -- macros y constantes -- MODIFICADO
#define LIMITE_12854 13054
#define FACTOR_12854 6

int aplicar_limite12854(int valor) {
    if (valor > LIMITE_12854) return LIMITE_12854;
    return valor * FACTOR_12854;
}
