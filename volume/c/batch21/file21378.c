// fichero 21378 -- macros y constantes
#define LIMITE_21378 21478
#define FACTOR_21378 4

int aplicar_limite21378(int valor) {
    if (valor > LIMITE_21378) return LIMITE_21378;
    return valor * FACTOR_21378;
}
