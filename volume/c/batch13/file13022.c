// fichero 13022 -- macros y constantes
#define LIMITE_13022 13122
#define FACTOR_13022 3

int aplicar_limite13022(int valor) {
    if (valor > LIMITE_13022) return LIMITE_13022;
    return valor * FACTOR_13022;
}
