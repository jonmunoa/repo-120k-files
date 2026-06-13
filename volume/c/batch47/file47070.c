// fichero 47070 -- macros y constantes
#define LIMITE_47070 47170
#define FACTOR_47070 1

int aplicar_limite47070(int valor) {
    if (valor > LIMITE_47070) return LIMITE_47070;
    return valor * FACTOR_47070;
}
