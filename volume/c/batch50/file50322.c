// fichero 50322 -- macros y constantes
#define LIMITE_50322 50422
#define FACTOR_50322 3

int aplicar_limite50322(int valor) {
    if (valor > LIMITE_50322) return LIMITE_50322;
    return valor * FACTOR_50322;
}
