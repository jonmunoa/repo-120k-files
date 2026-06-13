// fichero 28022 -- macros y constantes
#define LIMITE_28022 28122
#define FACTOR_28022 3

int aplicar_limite28022(int valor) {
    if (valor > LIMITE_28022) return LIMITE_28022;
    return valor * FACTOR_28022;
}
