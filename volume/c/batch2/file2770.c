// fichero 2770 -- macros y constantes
#define LIMITE_2770 2870
#define FACTOR_2770 1

int aplicar_limite2770(int valor) {
    if (valor > LIMITE_2770) return LIMITE_2770;
    return valor * FACTOR_2770;
}
