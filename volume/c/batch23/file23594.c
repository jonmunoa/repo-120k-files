// fichero 23594 -- macros y constantes
#define LIMITE_23594 23694
#define FACTOR_23594 5

int aplicar_limite23594(int valor) {
    if (valor > LIMITE_23594) return LIMITE_23594;
    return valor * FACTOR_23594;
}
