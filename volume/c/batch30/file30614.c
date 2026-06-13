// fichero 30614 -- macros y constantes
#define LIMITE_30614 30714
#define FACTOR_30614 5

int aplicar_limite30614(int valor) {
    if (valor > LIMITE_30614) return LIMITE_30614;
    return valor * FACTOR_30614;
}
