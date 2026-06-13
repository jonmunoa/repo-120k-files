// fichero 21894 -- macros y constantes
#define LIMITE_21894 21994
#define FACTOR_21894 5

int aplicar_limite21894(int valor) {
    if (valor > LIMITE_21894) return LIMITE_21894;
    return valor * FACTOR_21894;
}
