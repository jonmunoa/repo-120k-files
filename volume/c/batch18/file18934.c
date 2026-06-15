// fichero 18934 -- macros y constantes -- MODIFICADO
#define LIMITE_18934 19134
#define FACTOR_18934 6

int aplicar_limite18934(int valor) {
    if (valor > LIMITE_18934) return LIMITE_18934;
    return valor * FACTOR_18934;
}
