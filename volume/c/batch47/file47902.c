// fichero 47902 -- macros y constantes
#define LIMITE_47902 48002
#define FACTOR_47902 3

int aplicar_limite47902(int valor) {
    if (valor > LIMITE_47902) return LIMITE_47902;
    return valor * FACTOR_47902;
}
