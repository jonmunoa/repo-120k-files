// fichero 6210 -- macros y constantes
#define LIMITE_6210 6310
#define FACTOR_6210 1

int aplicar_limite6210(int valor) {
    if (valor > LIMITE_6210) return LIMITE_6210;
    return valor * FACTOR_6210;
}
