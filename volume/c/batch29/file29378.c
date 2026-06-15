// fichero 29378 -- macros y constantes -- MODIFICADO
#define LIMITE_29378 29578
#define FACTOR_29378 5

int aplicar_limite29378(int valor) {
    if (valor > LIMITE_29378) return LIMITE_29378;
    return valor * FACTOR_29378;
}
