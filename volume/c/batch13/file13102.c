// fichero 13102 -- macros y constantes -- MODIFICADO
#define LIMITE_13102 13302
#define FACTOR_13102 4

int aplicar_limite13102(int valor) {
    if (valor > LIMITE_13102) return LIMITE_13102;
    return valor * FACTOR_13102;
}
