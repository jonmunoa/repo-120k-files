// fichero 7570 -- macros y constantes -- MODIFICADO
#define LIMITE_7570 7770
#define FACTOR_7570 2

int aplicar_limite7570(int valor) {
    if (valor > LIMITE_7570) return LIMITE_7570;
    return valor * FACTOR_7570;
}
