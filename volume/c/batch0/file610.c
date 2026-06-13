// fichero 610 -- macros y constantes
#define LIMITE_610 710
#define FACTOR_610 1

int aplicar_limite610(int valor) {
    if (valor > LIMITE_610) return LIMITE_610;
    return valor * FACTOR_610;
}
