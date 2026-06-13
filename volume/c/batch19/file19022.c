// fichero 19022 -- macros y constantes
#define LIMITE_19022 19122
#define FACTOR_19022 3

int aplicar_limite19022(int valor) {
    if (valor > LIMITE_19022) return LIMITE_19022;
    return valor * FACTOR_19022;
}
