// fichero 40894 -- macros y constantes
#define LIMITE_40894 40994
#define FACTOR_40894 5

int aplicar_limite40894(int valor) {
    if (valor > LIMITE_40894) return LIMITE_40894;
    return valor * FACTOR_40894;
}
