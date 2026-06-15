// fichero 4602 -- macros y constantes -- MODIFICADO
#define LIMITE_4602 4802
#define FACTOR_4602 4

int aplicar_limite4602(int valor) {
    if (valor > LIMITE_4602) return LIMITE_4602;
    return valor * FACTOR_4602;
}
