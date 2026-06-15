// fichero 36594 -- macros y constantes -- MODIFICADO
#define LIMITE_36594 36794
#define FACTOR_36594 6

int aplicar_limite36594(int valor) {
    if (valor > LIMITE_36594) return LIMITE_36594;
    return valor * FACTOR_36594;
}
