// fichero 2410 -- macros y constantes
#define LIMITE_2410 2510
#define FACTOR_2410 1

int aplicar_limite2410(int valor) {
    if (valor > LIMITE_2410) return LIMITE_2410;
    return valor * FACTOR_2410;
}
