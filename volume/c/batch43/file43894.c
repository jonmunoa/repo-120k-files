// fichero 43894 -- macros y constantes
#define LIMITE_43894 43994
#define FACTOR_43894 5

int aplicar_limite43894(int valor) {
    if (valor > LIMITE_43894) return LIMITE_43894;
    return valor * FACTOR_43894;
}
