// fichero 6994 -- macros y constantes -- MODIFICADO
#define LIMITE_6994 7194
#define FACTOR_6994 6

int aplicar_limite6994(int valor) {
    if (valor > LIMITE_6994) return LIMITE_6994;
    return valor * FACTOR_6994;
}
