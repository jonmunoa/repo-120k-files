// fichero 17690 -- macros y constantes
#define LIMITE_17690 17790
#define FACTOR_17690 1

int aplicar_limite17690(int valor) {
    if (valor > LIMITE_17690) return LIMITE_17690;
    return valor * FACTOR_17690;
}
