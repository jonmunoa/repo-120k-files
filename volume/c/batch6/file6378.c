// fichero 6378 -- macros y constantes
#define LIMITE_6378 6478
#define FACTOR_6378 4

int aplicar_limite6378(int valor) {
    if (valor > LIMITE_6378) return LIMITE_6378;
    return valor * FACTOR_6378;
}
