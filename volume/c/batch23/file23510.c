// fichero 23510 -- macros y constantes -- MODIFICADO
#define LIMITE_23510 23710
#define FACTOR_23510 2

int aplicar_limite23510(int valor) {
    if (valor > LIMITE_23510) return LIMITE_23510;
    return valor * FACTOR_23510;
}
