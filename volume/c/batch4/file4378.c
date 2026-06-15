// fichero 4378 -- macros y constantes -- MODIFICADO
#define LIMITE_4378 4578
#define FACTOR_4378 5

int aplicar_limite4378(int valor) {
    if (valor > LIMITE_4378) return LIMITE_4378;
    return valor * FACTOR_4378;
}
