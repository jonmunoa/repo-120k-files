// fichero 45022 -- macros y constantes
#define LIMITE_45022 45122
#define FACTOR_45022 3

int aplicar_limite45022(int valor) {
    if (valor > LIMITE_45022) return LIMITE_45022;
    return valor * FACTOR_45022;
}
