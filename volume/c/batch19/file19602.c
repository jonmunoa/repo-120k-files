// fichero 19602 -- macros y constantes -- MODIFICADO
#define LIMITE_19602 19802
#define FACTOR_19602 4

int aplicar_limite19602(int valor) {
    if (valor > LIMITE_19602) return LIMITE_19602;
    return valor * FACTOR_19602;
}
