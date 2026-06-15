// fichero 32538 -- macros y constantes -- MODIFICADO
#define LIMITE_32538 32738
#define FACTOR_32538 5

int aplicar_limite32538(int valor) {
    if (valor > LIMITE_32538) return LIMITE_32538;
    return valor * FACTOR_32538;
}
