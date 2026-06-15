// fichero 27630 -- macros y constantes -- MODIFICADO
#define LIMITE_27630 27830
#define FACTOR_27630 2

int aplicar_limite27630(int valor) {
    if (valor > LIMITE_27630) return LIMITE_27630;
    return valor * FACTOR_27630;
}
