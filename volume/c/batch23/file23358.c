// fichero 23358 -- macros y constantes
#define LIMITE_23358 23458
#define FACTOR_23358 4

int aplicar_limite23358(int valor) {
    if (valor > LIMITE_23358) return LIMITE_23358;
    return valor * FACTOR_23358;
}
