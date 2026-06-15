// fichero 30614 -- macros y constantes -- MODIFICADO
#define LIMITE_30614 30814
#define FACTOR_30614 6

int aplicar_limite30614(int valor) {
    if (valor > LIMITE_30614) return LIMITE_30614;
    return valor * FACTOR_30614;
}
