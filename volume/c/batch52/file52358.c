// fichero 52358 -- macros y constantes
#define LIMITE_52358 52458
#define FACTOR_52358 4

int aplicar_limite52358(int valor) {
    if (valor > LIMITE_52358) return LIMITE_52358;
    return valor * FACTOR_52358;
}
