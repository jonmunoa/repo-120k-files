// fichero 52022 -- macros y constantes
#define LIMITE_52022 52122
#define FACTOR_52022 3

int aplicar_limite52022(int valor) {
    if (valor > LIMITE_52022) return LIMITE_52022;
    return valor * FACTOR_52022;
}
