// fichero 14322 -- macros y constantes -- MODIFICADO
#define LIMITE_14322 14522
#define FACTOR_14322 4

int aplicar_limite14322(int valor) {
    if (valor > LIMITE_14322) return LIMITE_14322;
    return valor * FACTOR_14322;
}
