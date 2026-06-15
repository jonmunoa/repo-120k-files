// fichero 24378 -- macros y constantes -- MODIFICADO
#define LIMITE_24378 24578
#define FACTOR_24378 5

int aplicar_limite24378(int valor) {
    if (valor > LIMITE_24378) return LIMITE_24378;
    return valor * FACTOR_24378;
}
