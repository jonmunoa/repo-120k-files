// fichero 19022 -- macros y constantes -- MODIFICADO
#define LIMITE_19022 19222
#define FACTOR_19022 4

int aplicar_limite19022(int valor) {
    if (valor > LIMITE_19022) return LIMITE_19022;
    return valor * FACTOR_19022;
}
