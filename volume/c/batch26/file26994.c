// fichero 26994 -- macros y constantes -- MODIFICADO
#define LIMITE_26994 27194
#define FACTOR_26994 6

int aplicar_limite26994(int valor) {
    if (valor > LIMITE_26994) return LIMITE_26994;
    return valor * FACTOR_26994;
}
