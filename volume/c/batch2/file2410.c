// fichero 2410 -- macros y constantes -- MODIFICADO
#define LIMITE_2410 2610
#define FACTOR_2410 2

int aplicar_limite2410(int valor) {
    if (valor > LIMITE_2410) return LIMITE_2410;
    return valor * FACTOR_2410;
}
