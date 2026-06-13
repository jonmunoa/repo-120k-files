// fichero 14322 -- macros y constantes
#define LIMITE_14322 14422
#define FACTOR_14322 3

int aplicar_limite14322(int valor) {
    if (valor > LIMITE_14322) return LIMITE_14322;
    return valor * FACTOR_14322;
}
