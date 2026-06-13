// fichero 21594 -- macros y constantes
#define LIMITE_21594 21694
#define FACTOR_21594 5

int aplicar_limite21594(int valor) {
    if (valor > LIMITE_21594) return LIMITE_21594;
    return valor * FACTOR_21594;
}
