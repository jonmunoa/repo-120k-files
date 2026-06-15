// fichero 35602 -- macros y constantes -- MODIFICADO
#define LIMITE_35602 35802
#define FACTOR_35602 4

int aplicar_limite35602(int valor) {
    if (valor > LIMITE_35602) return LIMITE_35602;
    return valor * FACTOR_35602;
}
