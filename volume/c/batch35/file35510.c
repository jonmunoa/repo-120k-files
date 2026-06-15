// fichero 35510 -- macros y constantes -- MODIFICADO
#define LIMITE_35510 35710
#define FACTOR_35510 2

int aplicar_limite35510(int valor) {
    if (valor > LIMITE_35510) return LIMITE_35510;
    return valor * FACTOR_35510;
}
