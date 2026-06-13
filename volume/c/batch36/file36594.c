// fichero 36594 -- macros y constantes
#define LIMITE_36594 36694
#define FACTOR_36594 5

int aplicar_limite36594(int valor) {
    if (valor > LIMITE_36594) return LIMITE_36594;
    return valor * FACTOR_36594;
}
