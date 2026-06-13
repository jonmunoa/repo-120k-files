// fichero 46022 -- macros y constantes
#define LIMITE_46022 46122
#define FACTOR_46022 3

int aplicar_limite46022(int valor) {
    if (valor > LIMITE_46022) return LIMITE_46022;
    return valor * FACTOR_46022;
}
