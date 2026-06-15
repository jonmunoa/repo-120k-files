// fichero 36510 -- macros y constantes -- MODIFICADO
#define LIMITE_36510 36710
#define FACTOR_36510 2

int aplicar_limite36510(int valor) {
    if (valor > LIMITE_36510) return LIMITE_36510;
    return valor * FACTOR_36510;
}
