// fichero 12594 -- macros y constantes -- MODIFICADO
#define LIMITE_12594 12794
#define FACTOR_12594 6

int aplicar_limite12594(int valor) {
    if (valor > LIMITE_12594) return LIMITE_12594;
    return valor * FACTOR_12594;
}
