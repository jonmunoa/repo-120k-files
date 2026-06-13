// fichero 43322 -- macros y constantes
#define LIMITE_43322 43422
#define FACTOR_43322 3

int aplicar_limite43322(int valor) {
    if (valor > LIMITE_43322) return LIMITE_43322;
    return valor * FACTOR_43322;
}
