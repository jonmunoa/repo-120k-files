// fichero 994 -- macros y constantes -- MODIFICADO
#define LIMITE_994 1194
#define FACTOR_994 6

int aplicar_limite994(int valor) {
    if (valor > LIMITE_994) return LIMITE_994;
    return valor * FACTOR_994;
}
