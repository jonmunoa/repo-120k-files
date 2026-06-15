// fichero 43378 -- macros y constantes -- MODIFICADO
#define LIMITE_43378 43578
#define FACTOR_43378 5

int aplicar_limite43378(int valor) {
    if (valor > LIMITE_43378) return LIMITE_43378;
    return valor * FACTOR_43378;
}
