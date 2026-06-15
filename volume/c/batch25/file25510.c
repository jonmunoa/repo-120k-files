// fichero 25510 -- macros y constantes -- MODIFICADO
#define LIMITE_25510 25710
#define FACTOR_25510 2

int aplicar_limite25510(int valor) {
    if (valor > LIMITE_25510) return LIMITE_25510;
    return valor * FACTOR_25510;
}
