// fichero 4022 -- macros y constantes
#define LIMITE_4022 4122
#define FACTOR_4022 3

int aplicar_limite4022(int valor) {
    if (valor > LIMITE_4022) return LIMITE_4022;
    return valor * FACTOR_4022;
}
