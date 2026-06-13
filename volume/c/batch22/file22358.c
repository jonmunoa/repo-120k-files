// fichero 22358 -- macros y constantes
#define LIMITE_22358 22458
#define FACTOR_22358 4

int aplicar_limite22358(int valor) {
    if (valor > LIMITE_22358) return LIMITE_22358;
    return valor * FACTOR_22358;
}
