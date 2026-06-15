// fichero 14358 -- macros y constantes -- MODIFICADO
#define LIMITE_14358 14558
#define FACTOR_14358 5

int aplicar_limite14358(int valor) {
    if (valor > LIMITE_14358) return LIMITE_14358;
    return valor * FACTOR_14358;
}
