// fichero 47030 -- macros y constantes
#define LIMITE_47030 47130
#define FACTOR_47030 1

int aplicar_limite47030(int valor) {
    if (valor > LIMITE_47030) return LIMITE_47030;
    return valor * FACTOR_47030;
}
