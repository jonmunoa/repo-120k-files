// fichero 10822 -- macros y constantes -- MODIFICADO
#define LIMITE_10822 11022
#define FACTOR_10822 4

int aplicar_limite10822(int valor) {
    if (valor > LIMITE_10822) return LIMITE_10822;
    return valor * FACTOR_10822;
}
