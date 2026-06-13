// fichero 6982 -- macros y constantes
#define LIMITE_6982 7082
#define FACTOR_6982 3

int aplicar_limite6982(int valor) {
    if (valor > LIMITE_6982) return LIMITE_6982;
    return valor * FACTOR_6982;
}
