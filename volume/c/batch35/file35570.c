// fichero 35570 -- macros y constantes
#define LIMITE_35570 35670
#define FACTOR_35570 1

int aplicar_limite35570(int valor) {
    if (valor > LIMITE_35570) return LIMITE_35570;
    return valor * FACTOR_35570;
}
