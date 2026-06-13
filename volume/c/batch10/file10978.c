// fichero 10978 -- macros y constantes
#define LIMITE_10978 11078
#define FACTOR_10978 4

int aplicar_limite10978(int valor) {
    if (valor > LIMITE_10978) return LIMITE_10978;
    return valor * FACTOR_10978;
}
