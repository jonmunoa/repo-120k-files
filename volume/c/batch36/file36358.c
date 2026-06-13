// fichero 36358 -- macros y constantes
#define LIMITE_36358 36458
#define FACTOR_36358 4

int aplicar_limite36358(int valor) {
    if (valor > LIMITE_36358) return LIMITE_36358;
    return valor * FACTOR_36358;
}
