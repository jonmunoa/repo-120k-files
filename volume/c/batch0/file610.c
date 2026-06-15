// fichero 610 -- macros y constantes -- MODIFICADO
#define LIMITE_610 810
#define FACTOR_610 2

int aplicar_limite610(int valor) {
    if (valor > LIMITE_610) return LIMITE_610;
    return valor * FACTOR_610;
}
