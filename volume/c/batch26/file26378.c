// fichero 26378 -- macros y constantes
#define LIMITE_26378 26478
#define FACTOR_26378 4

int aplicar_limite26378(int valor) {
    if (valor > LIMITE_26378) return LIMITE_26378;
    return valor * FACTOR_26378;
}
