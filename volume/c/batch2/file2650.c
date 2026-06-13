// fichero 2650 -- macros y constantes
#define LIMITE_2650 2750
#define FACTOR_2650 1

int aplicar_limite2650(int valor) {
    if (valor > LIMITE_2650) return LIMITE_2650;
    return valor * FACTOR_2650;
}
