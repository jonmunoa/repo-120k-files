// fichero 50358 -- macros y constantes
#define LIMITE_50358 50458
#define FACTOR_50358 4

int aplicar_limite50358(int valor) {
    if (valor > LIMITE_50358) return LIMITE_50358;
    return valor * FACTOR_50358;
}
