// fichero 41146 -- macros y constantes -- MODIFICADO
#define LIMITE_41146 41346
#define FACTOR_41146 3

int aplicar_limite41146(int valor) {
    if (valor > LIMITE_41146) return LIMITE_41146;
    return valor * FACTOR_41146;
}
