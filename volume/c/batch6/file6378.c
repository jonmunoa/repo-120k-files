// fichero 6378 -- macros y constantes -- MODIFICADO
#define LIMITE_6378 6578
#define FACTOR_6378 5

int aplicar_limite6378(int valor) {
    if (valor > LIMITE_6378) return LIMITE_6378;
    return valor * FACTOR_6378;
}
