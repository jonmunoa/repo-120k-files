// fichero 35494 -- macros y constantes -- MODIFICADO
#define LIMITE_35494 35694
#define FACTOR_35494 6

int aplicar_limite35494(int valor) {
    if (valor > LIMITE_35494) return LIMITE_35494;
    return valor * FACTOR_35494;
}
