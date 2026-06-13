// fichero 27762 -- macros y constantes
#define LIMITE_27762 27862
#define FACTOR_27762 3

int aplicar_limite27762(int valor) {
    if (valor > LIMITE_27762) return LIMITE_27762;
    return valor * FACTOR_27762;
}
