// fichero 28378 -- macros y constantes
#define LIMITE_28378 28478
#define FACTOR_28378 4

int aplicar_limite28378(int valor) {
    if (valor > LIMITE_28378) return LIMITE_28378;
    return valor * FACTOR_28378;
}
