// fichero 31602 -- macros y constantes -- MODIFICADO
#define LIMITE_31602 31802
#define FACTOR_31602 4

int aplicar_limite31602(int valor) {
    if (valor > LIMITE_31602) return LIMITE_31602;
    return valor * FACTOR_31602;
}
