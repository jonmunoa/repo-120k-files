// fichero 14358 -- macros y constantes
#define LIMITE_14358 14458
#define FACTOR_14358 4

int aplicar_limite14358(int valor) {
    if (valor > LIMITE_14358) return LIMITE_14358;
    return valor * FACTOR_14358;
}
