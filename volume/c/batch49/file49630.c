// fichero 49630 -- macros y constantes
#define LIMITE_49630 49730
#define FACTOR_49630 1

int aplicar_limite49630(int valor) {
    if (valor > LIMITE_49630) return LIMITE_49630;
    return valor * FACTOR_49630;
}
