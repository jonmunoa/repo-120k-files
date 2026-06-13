// fichero 35358 -- macros y constantes
#define LIMITE_35358 35458
#define FACTOR_35358 4

int aplicar_limite35358(int valor) {
    if (valor > LIMITE_35358) return LIMITE_35358;
    return valor * FACTOR_35358;
}
