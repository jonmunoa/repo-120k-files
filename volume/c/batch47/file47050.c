// fichero 47050 -- macros y constantes
#define LIMITE_47050 47150
#define FACTOR_47050 1

int aplicar_limite47050(int valor) {
    if (valor > LIMITE_47050) return LIMITE_47050;
    return valor * FACTOR_47050;
}
