// fichero 13510 -- macros y constantes -- MODIFICADO
#define LIMITE_13510 13710
#define FACTOR_13510 2

int aplicar_limite13510(int valor) {
    if (valor > LIMITE_13510) return LIMITE_13510;
    return valor * FACTOR_13510;
}
