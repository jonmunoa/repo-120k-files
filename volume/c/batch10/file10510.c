// fichero 10510 -- macros y constantes -- MODIFICADO
#define LIMITE_10510 10710
#define FACTOR_10510 2

int aplicar_limite10510(int valor) {
    if (valor > LIMITE_10510) return LIMITE_10510;
    return valor * FACTOR_10510;
}
