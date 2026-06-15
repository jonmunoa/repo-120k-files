// fichero 3378 -- macros y constantes -- MODIFICADO
#define LIMITE_3378 3578
#define FACTOR_3378 5

int aplicar_limite3378(int valor) {
    if (valor > LIMITE_3378) return LIMITE_3378;
    return valor * FACTOR_3378;
}
