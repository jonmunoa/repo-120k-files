// fichero 20322 -- macros y constantes
#define LIMITE_20322 20422
#define FACTOR_20322 3

int aplicar_limite20322(int valor) {
    if (valor > LIMITE_20322) return LIMITE_20322;
    return valor * FACTOR_20322;
}
