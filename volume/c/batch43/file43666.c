// fichero 43666 -- macros y constantes
#define LIMITE_43666 43766
#define FACTOR_43666 2

int aplicar_limite43666(int valor) {
    if (valor > LIMITE_43666) return LIMITE_43666;
    return valor * FACTOR_43666;
}
