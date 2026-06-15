// fichero 8050 -- macros y constantes -- MODIFICADO
#define LIMITE_8050 8250
#define FACTOR_8050 2

int aplicar_limite8050(int valor) {
    if (valor > LIMITE_8050) return LIMITE_8050;
    return valor * FACTOR_8050;
}
