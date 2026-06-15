// fichero 13602 -- macros y constantes -- MODIFICADO
#define LIMITE_13602 13802
#define FACTOR_13602 4

int aplicar_limite13602(int valor) {
    if (valor > LIMITE_13602) return LIMITE_13602;
    return valor * FACTOR_13602;
}
