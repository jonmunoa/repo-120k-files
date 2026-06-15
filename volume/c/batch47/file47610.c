// fichero 47610 -- macros y constantes -- MODIFICADO
#define LIMITE_47610 47810
#define FACTOR_47610 2

int aplicar_limite47610(int valor) {
    if (valor > LIMITE_47610) return LIMITE_47610;
    return valor * FACTOR_47610;
}
