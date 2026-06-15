// fichero 14146 -- macros y constantes -- MODIFICADO
#define LIMITE_14146 14346
#define FACTOR_14146 3

int aplicar_limite14146(int valor) {
    if (valor > LIMITE_14146) return LIMITE_14146;
    return valor * FACTOR_14146;
}
