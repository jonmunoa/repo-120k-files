// fichero 6594 -- macros y constantes
#define LIMITE_6594 6694
#define FACTOR_6594 5

int aplicar_limite6594(int valor) {
    if (valor > LIMITE_6594) return LIMITE_6594;
    return valor * FACTOR_6594;
}
