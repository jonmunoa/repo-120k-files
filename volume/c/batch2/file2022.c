// fichero 2022 -- macros y constantes
#define LIMITE_2022 2122
#define FACTOR_2022 3

int aplicar_limite2022(int valor) {
    if (valor > LIMITE_2022) return LIMITE_2022;
    return valor * FACTOR_2022;
}
