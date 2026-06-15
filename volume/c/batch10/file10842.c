// fichero 10842 -- macros y constantes -- MODIFICADO
#define LIMITE_10842 11042
#define FACTOR_10842 4

int aplicar_limite10842(int valor) {
    if (valor > LIMITE_10842) return LIMITE_10842;
    return valor * FACTOR_10842;
}
