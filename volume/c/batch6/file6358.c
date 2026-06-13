// fichero 6358 -- macros y constantes
#define LIMITE_6358 6458
#define FACTOR_6358 4

int aplicar_limite6358(int valor) {
    if (valor > LIMITE_6358) return LIMITE_6358;
    return valor * FACTOR_6358;
}
