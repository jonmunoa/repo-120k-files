// fichero 24378 -- macros y constantes
#define LIMITE_24378 24478
#define FACTOR_24378 4

int aplicar_limite24378(int valor) {
    if (valor > LIMITE_24378) return LIMITE_24378;
    return valor * FACTOR_24378;
}
