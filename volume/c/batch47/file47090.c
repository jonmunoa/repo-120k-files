// fichero 47090 -- macros y constantes
#define LIMITE_47090 47190
#define FACTOR_47090 1

int aplicar_limite47090(int valor) {
    if (valor > LIMITE_47090) return LIMITE_47090;
    return valor * FACTOR_47090;
}
