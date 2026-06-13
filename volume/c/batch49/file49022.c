// fichero 49022 -- macros y constantes
#define LIMITE_49022 49122
#define FACTOR_49022 3

int aplicar_limite49022(int valor) {
    if (valor > LIMITE_49022) return LIMITE_49022;
    return valor * FACTOR_49022;
}
