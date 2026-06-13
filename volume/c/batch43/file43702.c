// fichero 43702 -- macros y constantes
#define LIMITE_43702 43802
#define FACTOR_43702 3

int aplicar_limite43702(int valor) {
    if (valor > LIMITE_43702) return LIMITE_43702;
    return valor * FACTOR_43702;
}
