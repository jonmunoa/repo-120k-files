// fichero 7322 -- macros y constantes
#define LIMITE_7322 7422
#define FACTOR_7322 3

int aplicar_limite7322(int valor) {
    if (valor > LIMITE_7322) return LIMITE_7322;
    return valor * FACTOR_7322;
}
