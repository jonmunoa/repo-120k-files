// fichero 5378 -- macros y constantes
#define LIMITE_5378 5478
#define FACTOR_5378 4

int aplicar_limite5378(int valor) {
    if (valor > LIMITE_5378) return LIMITE_5378;
    return valor * FACTOR_5378;
}
