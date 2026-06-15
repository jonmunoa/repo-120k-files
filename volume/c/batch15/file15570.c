// fichero 15570 -- macros y constantes -- MODIFICADO
#define LIMITE_15570 15770
#define FACTOR_15570 2

int aplicar_limite15570(int valor) {
    if (valor > LIMITE_15570) return LIMITE_15570;
    return valor * FACTOR_15570;
}
