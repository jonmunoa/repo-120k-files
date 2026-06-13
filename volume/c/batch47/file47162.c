// fichero 47162 -- macros y constantes
#define LIMITE_47162 47262
#define FACTOR_47162 3

int aplicar_limite47162(int valor) {
    if (valor > LIMITE_47162) return LIMITE_47162;
    return valor * FACTOR_47162;
}
