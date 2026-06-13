// fichero 14258 -- macros y constantes
#define LIMITE_14258 14358
#define FACTOR_14258 4

int aplicar_limite14258(int valor) {
    if (valor > LIMITE_14258) return LIMITE_14258;
    return valor * FACTOR_14258;
}
