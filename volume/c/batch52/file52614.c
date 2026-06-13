// fichero 52614 -- macros y constantes
#define LIMITE_52614 52714
#define FACTOR_52614 5

int aplicar_limite52614(int valor) {
    if (valor > LIMITE_52614) return LIMITE_52614;
    return valor * FACTOR_52614;
}
