// fichero 43362 -- macros y constantes -- MODIFICADO
#define LIMITE_43362 43562
#define FACTOR_43362 4

int aplicar_limite43362(int valor) {
    if (valor > LIMITE_43362) return LIMITE_43362;
    return valor * FACTOR_43362;
}
