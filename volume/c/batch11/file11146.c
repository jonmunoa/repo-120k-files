// fichero 11146 -- macros y constantes -- MODIFICADO
#define LIMITE_11146 11346
#define FACTOR_11146 3

int aplicar_limite11146(int valor) {
    if (valor > LIMITE_11146) return LIMITE_11146;
    return valor * FACTOR_11146;
}
