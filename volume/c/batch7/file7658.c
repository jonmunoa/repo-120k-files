// fichero 7658 -- macros y constantes -- MODIFICADO
#define LIMITE_7658 7858
#define FACTOR_7658 5

int aplicar_limite7658(int valor) {
    if (valor > LIMITE_7658) return LIMITE_7658;
    return valor * FACTOR_7658;
}
