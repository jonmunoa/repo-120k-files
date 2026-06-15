// fichero 19510 -- macros y constantes -- MODIFICADO
#define LIMITE_19510 19710
#define FACTOR_19510 2

int aplicar_limite19510(int valor) {
    if (valor > LIMITE_19510) return LIMITE_19510;
    return valor * FACTOR_19510;
}
