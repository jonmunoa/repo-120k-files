// fichero 50882 -- macros y constantes
#define LIMITE_50882 50982
#define FACTOR_50882 3

int aplicar_limite50882(int valor) {
    if (valor > LIMITE_50882) return LIMITE_50882;
    return valor * FACTOR_50882;
}
