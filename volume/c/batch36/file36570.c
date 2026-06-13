// fichero 36570 -- macros y constantes
#define LIMITE_36570 36670
#define FACTOR_36570 1

int aplicar_limite36570(int valor) {
    if (valor > LIMITE_36570) return LIMITE_36570;
    return valor * FACTOR_36570;
}
