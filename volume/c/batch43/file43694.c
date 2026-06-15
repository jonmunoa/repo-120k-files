// fichero 43694 -- macros y constantes -- MODIFICADO
#define LIMITE_43694 43894
#define FACTOR_43694 6

int aplicar_limite43694(int valor) {
    if (valor > LIMITE_43694) return LIMITE_43694;
    return valor * FACTOR_43694;
}
