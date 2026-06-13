// fichero 2594 -- macros y constantes
#define LIMITE_2594 2694
#define FACTOR_2594 5

int aplicar_limite2594(int valor) {
    if (valor > LIMITE_2594) return LIMITE_2594;
    return valor * FACTOR_2594;
}
