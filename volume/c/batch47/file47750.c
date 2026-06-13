// fichero 47750 -- macros y constantes
#define LIMITE_47750 47850
#define FACTOR_47750 1

int aplicar_limite47750(int valor) {
    if (valor > LIMITE_47750) return LIMITE_47750;
    return valor * FACTOR_47750;
}
