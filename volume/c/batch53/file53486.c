// fichero 53486 -- macros y constantes
#define LIMITE_53486 53586
#define FACTOR_53486 2

int aplicar_limite53486(int valor) {
    if (valor > LIMITE_53486) return LIMITE_53486;
    return valor * FACTOR_53486;
}
