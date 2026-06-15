// fichero 13570 -- macros y constantes -- MODIFICADO
#define LIMITE_13570 13770
#define FACTOR_13570 2

int aplicar_limite13570(int valor) {
    if (valor > LIMITE_13570) return LIMITE_13570;
    return valor * FACTOR_13570;
}
