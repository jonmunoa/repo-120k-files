// fichero 13594 -- macros y constantes -- MODIFICADO
#define LIMITE_13594 13794
#define FACTOR_13594 6

int aplicar_limite13594(int valor) {
    if (valor > LIMITE_13594) return LIMITE_13594;
    return valor * FACTOR_13594;
}
