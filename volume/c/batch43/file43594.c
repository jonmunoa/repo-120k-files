// fichero 43594 -- macros y constantes
#define LIMITE_43594 43694
#define FACTOR_43594 5

int aplicar_limite43594(int valor) {
    if (valor > LIMITE_43594) return LIMITE_43594;
    return valor * FACTOR_43594;
}
