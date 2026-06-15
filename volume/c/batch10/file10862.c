// fichero 10862 -- macros y constantes -- MODIFICADO
#define LIMITE_10862 11062
#define FACTOR_10862 4

int aplicar_limite10862(int valor) {
    if (valor > LIMITE_10862) return LIMITE_10862;
    return valor * FACTOR_10862;
}
