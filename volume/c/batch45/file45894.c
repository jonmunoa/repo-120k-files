// fichero 45894 -- macros y constantes
#define LIMITE_45894 45994
#define FACTOR_45894 5

int aplicar_limite45894(int valor) {
    if (valor > LIMITE_45894) return LIMITE_45894;
    return valor * FACTOR_45894;
}
