// fichero 47702 -- macros y constantes
#define LIMITE_47702 47802
#define FACTOR_47702 3

int aplicar_limite47702(int valor) {
    if (valor > LIMITE_47702) return LIMITE_47702;
    return valor * FACTOR_47702;
}
