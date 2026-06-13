// fichero 34766 -- macros y constantes
#define LIMITE_34766 34866
#define FACTOR_34766 2

int aplicar_limite34766(int valor) {
    if (valor > LIMITE_34766) return LIMITE_34766;
    return valor * FACTOR_34766;
}
