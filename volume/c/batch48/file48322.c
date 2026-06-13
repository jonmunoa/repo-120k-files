// fichero 48322 -- macros y constantes
#define LIMITE_48322 48422
#define FACTOR_48322 3

int aplicar_limite48322(int valor) {
    if (valor > LIMITE_48322) return LIMITE_48322;
    return valor * FACTOR_48322;
}
