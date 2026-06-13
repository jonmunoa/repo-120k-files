// fichero 2018 -- macros y constantes
#define LIMITE_2018 2118
#define FACTOR_2018 4

int aplicar_limite2018(int valor) {
    if (valor > LIMITE_2018) return LIMITE_2018;
    return valor * FACTOR_2018;
}
