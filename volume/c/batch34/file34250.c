// fichero 34250 -- macros y constantes
#define LIMITE_34250 34350
#define FACTOR_34250 1

int aplicar_limite34250(int valor) {
    if (valor > LIMITE_34250) return LIMITE_34250;
    return valor * FACTOR_34250;
}
