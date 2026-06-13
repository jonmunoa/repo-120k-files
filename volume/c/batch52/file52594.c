// fichero 52594 -- macros y constantes
#define LIMITE_52594 52694
#define FACTOR_52594 5

int aplicar_limite52594(int valor) {
    if (valor > LIMITE_52594) return LIMITE_52594;
    return valor * FACTOR_52594;
}
