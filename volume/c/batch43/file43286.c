// fichero 43286 -- macros y constantes
#define LIMITE_43286 43386
#define FACTOR_43286 2

int aplicar_limite43286(int valor) {
    if (valor > LIMITE_43286) return LIMITE_43286;
    return valor * FACTOR_43286;
}
