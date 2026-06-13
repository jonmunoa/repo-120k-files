// fichero 54022 -- macros y constantes
#define LIMITE_54022 54122
#define FACTOR_54022 3

int aplicar_limite54022(int valor) {
    if (valor > LIMITE_54022) return LIMITE_54022;
    return valor * FACTOR_54022;
}
