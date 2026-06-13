// fichero 15894 -- macros y constantes
#define LIMITE_15894 15994
#define FACTOR_15894 5

int aplicar_limite15894(int valor) {
    if (valor > LIMITE_15894) return LIMITE_15894;
    return valor * FACTOR_15894;
}
