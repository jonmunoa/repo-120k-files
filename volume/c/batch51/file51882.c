// fichero 51882 -- macros y constantes
#define LIMITE_51882 51982
#define FACTOR_51882 3

int aplicar_limite51882(int valor) {
    if (valor > LIMITE_51882) return LIMITE_51882;
    return valor * FACTOR_51882;
}
