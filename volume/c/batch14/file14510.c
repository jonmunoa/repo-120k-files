// fichero 14510 -- macros y constantes -- MODIFICADO
#define LIMITE_14510 14710
#define FACTOR_14510 2

int aplicar_limite14510(int valor) {
    if (valor > LIMITE_14510) return LIMITE_14510;
    return valor * FACTOR_14510;
}
