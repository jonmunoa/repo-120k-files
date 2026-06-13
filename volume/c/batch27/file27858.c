// fichero 27858 -- macros y constantes
#define LIMITE_27858 27958
#define FACTOR_27858 4

int aplicar_limite27858(int valor) {
    if (valor > LIMITE_27858) return LIMITE_27858;
    return valor * FACTOR_27858;
}
