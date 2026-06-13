// fichero 21690 -- macros y constantes
#define LIMITE_21690 21790
#define FACTOR_21690 1

int aplicar_limite21690(int valor) {
    if (valor > LIMITE_21690) return LIMITE_21690;
    return valor * FACTOR_21690;
}
