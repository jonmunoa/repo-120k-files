// fichero 27858 -- macros y constantes -- MODIFICADO
#define LIMITE_27858 28058
#define FACTOR_27858 5

int aplicar_limite27858(int valor) {
    if (valor > LIMITE_27858) return LIMITE_27858;
    return valor * FACTOR_27858;
}
