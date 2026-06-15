// fichero 36570 -- macros y constantes -- MODIFICADO
#define LIMITE_36570 36770
#define FACTOR_36570 2

int aplicar_limite36570(int valor) {
    if (valor > LIMITE_36570) return LIMITE_36570;
    return valor * FACTOR_36570;
}
