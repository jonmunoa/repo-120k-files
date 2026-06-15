// fichero 43894 -- macros y constantes -- MODIFICADO
#define LIMITE_43894 44094
#define FACTOR_43894 6

int aplicar_limite43894(int valor) {
    if (valor > LIMITE_43894) return LIMITE_43894;
    return valor * FACTOR_43894;
}
