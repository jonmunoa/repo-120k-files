// fichero 38022 -- macros y constantes
#define LIMITE_38022 38122
#define FACTOR_38022 3

int aplicar_limite38022(int valor) {
    if (valor > LIMITE_38022) return LIMITE_38022;
    return valor * FACTOR_38022;
}
