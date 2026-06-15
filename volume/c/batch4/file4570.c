// fichero 4570 -- macros y constantes -- MODIFICADO
#define LIMITE_4570 4770
#define FACTOR_4570 2

int aplicar_limite4570(int valor) {
    if (valor > LIMITE_4570) return LIMITE_4570;
    return valor * FACTOR_4570;
}
