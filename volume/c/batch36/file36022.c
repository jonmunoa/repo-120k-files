// fichero 36022 -- macros y constantes
#define LIMITE_36022 36122
#define FACTOR_36022 3

int aplicar_limite36022(int valor) {
    if (valor > LIMITE_36022) return LIMITE_36022;
    return valor * FACTOR_36022;
}
