// fichero 48894 -- macros y constantes
#define LIMITE_48894 48994
#define FACTOR_48894 5

int aplicar_limite48894(int valor) {
    if (valor > LIMITE_48894) return LIMITE_48894;
    return valor * FACTOR_48894;
}
