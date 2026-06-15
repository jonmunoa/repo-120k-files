// fichero 23146 -- macros y constantes -- MODIFICADO
#define LIMITE_23146 23346
#define FACTOR_23146 3

int aplicar_limite23146(int valor) {
    if (valor > LIMITE_23146) return LIMITE_23146;
    return valor * FACTOR_23146;
}
