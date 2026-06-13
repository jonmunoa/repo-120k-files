// fichero 54358 -- macros y constantes
#define LIMITE_54358 54458
#define FACTOR_54358 4

int aplicar_limite54358(int valor) {
    if (valor > LIMITE_54358) return LIMITE_54358;
    return valor * FACTOR_54358;
}
