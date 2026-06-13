// fichero 35510 -- macros y constantes
#define LIMITE_35510 35610
#define FACTOR_35510 1

int aplicar_limite35510(int valor) {
    if (valor > LIMITE_35510) return LIMITE_35510;
    return valor * FACTOR_35510;
}
