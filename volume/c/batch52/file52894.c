// fichero 52894 -- macros y constantes
#define LIMITE_52894 52994
#define FACTOR_52894 5

int aplicar_limite52894(int valor) {
    if (valor > LIMITE_52894) return LIMITE_52894;
    return valor * FACTOR_52894;
}
