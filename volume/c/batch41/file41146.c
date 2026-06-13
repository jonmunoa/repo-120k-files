// fichero 41146 -- macros y constantes
#define LIMITE_41146 41246
#define FACTOR_41146 2

int aplicar_limite41146(int valor) {
    if (valor > LIMITE_41146) return LIMITE_41146;
    return valor * FACTOR_41146;
}
