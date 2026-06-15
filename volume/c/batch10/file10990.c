// fichero 10990 -- macros y constantes -- MODIFICADO
#define LIMITE_10990 11190
#define FACTOR_10990 2

int aplicar_limite10990(int valor) {
    if (valor > LIMITE_10990) return LIMITE_10990;
    return valor * FACTOR_10990;
}
