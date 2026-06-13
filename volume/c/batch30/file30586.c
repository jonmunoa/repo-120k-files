// fichero 30586 -- macros y constantes
#define LIMITE_30586 30686
#define FACTOR_30586 2

int aplicar_limite30586(int valor) {
    if (valor > LIMITE_30586) return LIMITE_30586;
    return valor * FACTOR_30586;
}
