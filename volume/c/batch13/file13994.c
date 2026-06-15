// fichero 13994 -- macros y constantes -- MODIFICADO
#define LIMITE_13994 14194
#define FACTOR_13994 6

int aplicar_limite13994(int valor) {
    if (valor > LIMITE_13994) return LIMITE_13994;
    return valor * FACTOR_13994;
}
