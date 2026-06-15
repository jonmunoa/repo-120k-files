// fichero 23378 -- macros y constantes -- MODIFICADO
#define LIMITE_23378 23578
#define FACTOR_23378 5

int aplicar_limite23378(int valor) {
    if (valor > LIMITE_23378) return LIMITE_23378;
    return valor * FACTOR_23378;
}
