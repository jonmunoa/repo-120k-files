// fichero 32934 -- macros y constantes -- MODIFICADO
#define LIMITE_32934 33134
#define FACTOR_32934 6

int aplicar_limite32934(int valor) {
    if (valor > LIMITE_32934) return LIMITE_32934;
    return valor * FACTOR_32934;
}
