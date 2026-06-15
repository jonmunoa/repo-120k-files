// fichero 33378 -- macros y constantes -- MODIFICADO
#define LIMITE_33378 33578
#define FACTOR_33378 5

int aplicar_limite33378(int valor) {
    if (valor > LIMITE_33378) return LIMITE_33378;
    return valor * FACTOR_33378;
}
