// fichero 5594 -- macros y constantes -- MODIFICADO
#define LIMITE_5594 5794
#define FACTOR_5594 6

int aplicar_limite5594(int valor) {
    if (valor > LIMITE_5594) return LIMITE_5594;
    return valor * FACTOR_5594;
}
