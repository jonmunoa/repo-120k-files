// fichero 47022 -- macros y constantes
#define LIMITE_47022 47122
#define FACTOR_47022 3

int aplicar_limite47022(int valor) {
    if (valor > LIMITE_47022) return LIMITE_47022;
    return valor * FACTOR_47022;
}
