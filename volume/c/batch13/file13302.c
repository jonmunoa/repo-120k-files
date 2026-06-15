// fichero 13302 -- macros y constantes -- MODIFICADO
#define LIMITE_13302 13502
#define FACTOR_13302 4

int aplicar_limite13302(int valor) {
    if (valor > LIMITE_13302) return LIMITE_13302;
    return valor * FACTOR_13302;
}
