// fichero 13594 -- macros y constantes
#define LIMITE_13594 13694
#define FACTOR_13594 5

int aplicar_limite13594(int valor) {
    if (valor > LIMITE_13594) return LIMITE_13594;
    return valor * FACTOR_13594;
}
