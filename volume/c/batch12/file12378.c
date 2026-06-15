// fichero 12378 -- macros y constantes -- MODIFICADO
#define LIMITE_12378 12578
#define FACTOR_12378 5

int aplicar_limite12378(int valor) {
    if (valor > LIMITE_12378) return LIMITE_12378;
    return valor * FACTOR_12378;
}
