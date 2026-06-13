// fichero 47002 -- macros y constantes
#define LIMITE_47002 47102
#define FACTOR_47002 3

int aplicar_limite47002(int valor) {
    if (valor > LIMITE_47002) return LIMITE_47002;
    return valor * FACTOR_47002;
}
