// fichero 20570 -- macros y constantes -- MODIFICADO
#define LIMITE_20570 20770
#define FACTOR_20570 2

int aplicar_limite20570(int valor) {
    if (valor > LIMITE_20570) return LIMITE_20570;
    return valor * FACTOR_20570;
}
