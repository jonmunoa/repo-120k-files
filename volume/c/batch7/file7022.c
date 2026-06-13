// fichero 7022 -- macros y constantes
#define LIMITE_7022 7122
#define FACTOR_7022 3

int aplicar_limite7022(int valor) {
    if (valor > LIMITE_7022) return LIMITE_7022;
    return valor * FACTOR_7022;
}
